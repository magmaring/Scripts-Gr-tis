//========================================================================================================||
//           000     000 0000000 00000000 000     000 00000000 00000000 00 000      00 00000000           ||
//           0000   0000 00   00 00       0000   0000 00    00 00    00 00 00 00    00 00                 ||
//           00000 00000 00   00 00  0000 00000 00000 00    00 00    00 00 00  00   00 00  0000           ||
//           00000000000 0000000 00    00 00000000000 00000000 000000   00 00   00  00 00    00           ||
//           00       00 00   00 00    00 00       00 00    00 00    00 00 00    00 00 00    00           ||
//           00       00 00   00 00000000 00       00 00    00 00    00 00 00     0000 00000000           ||
//========================================================================================================||
//         VENDAS DE SERVI�OS SERVIDORES DE RAGNAROK ONLINE/PERFECT WORLD/MU/AION/CABAL/MINECRAFT         ||
//                                CONTATO OU SUPORTE ATRAV�S DOS CANAIS                                   ||
//                                DISCORD: [ADM] Magmaring#0352                                           ||
//                                FACEBOOK: https://www.facebook.com/sorakamente/                         ||
//                                WHATSAPP: https://wa.me/5585999677074                                   ||
//========================================================================================================||

-	script	SistemaPresenca	-1,{
	
	OnInit:    
		bindatcmd "presen�a",strnpcinfo(3)+"::OnAtcommand";       

//--------------------------- CONFIGURA��ES ----------------------------
// Tempo para ganho de ponto. (Em minutos)
	set .tempo, 60;
// O tempo � resetado ao se deslogar? (1 = sim, 0 = n�o)
	set .reset, 0;
// Tempo m�ximo em segundos aceito em AFK. (Utilize valor 0 para aceitar jogadores AFK)
	set .afk, 900;
// Defina se ser� aceito @autotrade, em caso de se permitir jogador AFK. 
// 0 = � aceito.
// 1 = N�o � aceito personagem em @autotrade.
// 2 = N�o � aceito personagem com loja aberta, mesmo que sem @autotrade.
	set .loja, 2;
//
//----------------------------------------------------------------------
//----------------- NPC de Troca de Pontos por Itens -------------------
	
	initnpctimer;
	end;
	
	OnAtcommand:
		mes "[^FF5733Sistema de Presen�a^000000]";
		
		mes "Falta(m) "+ (.tempo - #TempoPresenca) +" minuto(s) para voc� ganhar o pr�mio de presen�a.";
		mes "Voc� ganha o pr�mio de presen�a por cada " + .tempo + " minutos online.";
		if (.reset) mes "Seu tempo � reiniciado ao se deslogar.";
		if (.afk) mes "Ao ficar AFK o tempo de presen�a n�o � contado.";
		if (.loja == 1) mes "Personagens em @autotrade o tempo de presen�a n�o � contado.";
		if (.loja == 2) mes "Personagens com lojas abertas o tempo de presen�a n�o � contado.";
		close;
	
	OnTimer60000:
	freeloop(1);
	query_sql("SELECT account_id FROM `char` WHERE online = 1", .@account_id);
		for (set .@i, 0; .@i < getarraysize(.@account_id); .@i++) {
			if (attachrid(.@account_id[.@i])) {
				if( 
				(.afk && checkidle(strcharinfo(0)) > .afk) || 
				(.loja && ((.loja == 1 && checkvending(strcharinfo(0)) == 2) || (.loja == 2 && checkvending(strcharinfo(0))))) 
				) {
					break;
				}
					
				set #TempoPresenca, #TempoPresenca + 1;
				if (#TempoPresenca >= .tempo) {
					dispbottom "Presen�a: Parab�ns, aqui est� a sua recompensa por tempo online.";
					getitem 31002,1;
					set #TempoPresenca, 0;
				}
				detachrid;
			}
		}
	freeloop(0);
		stopnpctimer;
		initnpctimer;
		end;
		
	OnPCLogoutEvent:    
		if (.reset) {
			set #TempoPresenca, 0;
		}
		end;
}