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
prontera,153,193,5	script	Mestra das Classes	838,{
show $@nome$;
if(Class > 4007 && Class < 4023 || Class > 4046 && Class < 4050 || Class > 4029 && Class < 4046 || Class == 4045){
show "Nao posso fazer nada por voce.";
close;
}
set BaseLevel,BaseLevel+$@level;
show "Ol� ^0000CD"+strcharinfo(0)+"^000000";
show "Gostaria de mudar de classe?";
next;
menu "Sim, por favor.",-,"Nao, obrigado.",nao;
next;
show $@nome$;
show "Tudo bem,";
show "Escolha qual classe";
show "Deseja se tornar:";
next;
menu "-Mostre me as op�oes..",-,"Nenhuma, obrigado",nao;
next;
menu "- Algoz",algoz,"- Desordeiro",desordeiro,"- Menestrel/Cigana",menestrel,"- Mestre",mestre,"- Mestre-ferreiro",mestreferreiro,"- Atirador de Elite",atirador,"- Criador",criador,"- Arquimago",arquimago,"- Lorde",lorde,"- Paladino",paladino,"- Sumo Sacerdote",sumo,"- Professor",professor,"- Cavaleiro",cavaleiro,"- Mercen�rio",mercenario,"- Arruaceiro",arruaceiro,"- Monge",monge,"-Pr�ximo",-;
next;
menu "- Ferreiro",ferreiro,"- Alquimista",alquimista,"-Templ�rio",templario,"- Ca�ador",cacador,"- S�bio",sabio,"- Bruxo",bruxo,"- Bardo/Odalisca",bardo,"- Sacerdote",sacerdote,"- Taekwon",taekwon,"- Mestre Taekwon",mestretaekwon,"- Espiritualista",espiritualista,"- Justiceiro",justiceiro,"- Ninja",ninja,"- Super Aprendiz",superaprendiz,"-Pr�ximo",-;
next;
menu "- Baby Alquimista",babyalquimista,"- Baby Bardo/Odalisca",babybardo,"- Baby Arruaceiro",babyarruaceiro,"- Baby S�bio",babysabio,"- Baby Templ�rio",babytemplario,"- Baby Ferreiro",babyferreiro,"- Baby Ca�ador",babycacador,"- Baby Bruxo",babybruxo,"- Baby Monge",babymonge,"- Baby Cavaleiro",babycavaleiro,"- Baby Mercen�rio",babymercenario,"- Baby Sacerdote",babysacerdote,"- Baby Mercador",babymercador,"- Baby Arqueiro",babyarqueiro,"- Baby Aprendiz",babyaprendiz,"- Super Bebe",babysuperaprendiz,"- Baby Espadachim",babyEspadachim,"- Baby Gatuno",babygatuno,"- Baby Mago",babymago,"- Baby Novi�o",babynovico,"Nenhum, obrigado.",nao;

cavaleiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Cavaleira!";
if(sex == 1)show "Parab�ns, voce agora � um Cavaleiro!";
jobchange 7;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1001,1,0;
close;


mercenario:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Mercen�ria!";
if(sex == 1)show "Parab�ns, voce agora � um Mercen�rio!";
jobchange 12;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1003,1,0;
skill 1004,1,0;
close;


bruxo:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Bruxa!";
if(sex == 1)show "Parab�ns, voce agora � um Bruxo!";
jobchange 9;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1006,1,0;
close;


cacador:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Ca�adora!";
if(sex == 1)show "Parab�ns, voce agora � um Ca�ador!";
jobchange 11;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1009,1,0;
close;


sacerdote:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Sacerdotisa!";
if(sex == 1)show "Parab�ns, voce agora � um Sacerdote!";
jobchange 8;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1014,1,0;
close;


ferreiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Ferreira!";
if(sex == 1)show "Parab�ns, voce agora � um Ferreiro!";
jobchange 10;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1012,1,0;
skill 1013,1,0;
close;

templario:
next;
if(sex == 0)show "Parab�ns, voce agora � uma Templ�ria!";
if(sex == 1)show "Parab�ns, voce agora � um Cavaleiro!";
jobchange 14;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1002,1,0;
close;


arruaceiro:
next;
if(sex == 0)show "Parab�ns, voce agora � uma Arruaceira!";
if(sex == 1)show "Parab�ns, voce agora � um Arruaceiro!";
jobchange 17;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1005,1,0;
close;

monge:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Monja!";
if(sex == 1)show "Parab�ns, voce agora � um Monge!";
jobchange 15;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1015,1,0;
skill 1016,1,0;
close;

alquimista:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Alquimista!";
if(sex == 1)show "Parab�ns, voce agora � um Alquimista!";
jobchange 18;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 238,1,0;
skill 243,1,0;
skill 244,1,0;
skill 247,1,0;
close;

sabio:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma S�bia!";
if(sex == 1)show "Parab�ns, voce agora � um S�bio!";
jobchange 16;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1007,1,0;
close;

bardo:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Odalisca!";
if(sex == 1)show "Parab�ns, voce agora � um Bardo!";
jobchange 19;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1010,1,0;
close;

algoz:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Algoz!";
if(sex == 1)show "Parab�ns, voce agora � um Algoz!";
jobchange 4013;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

desordeiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Desordeira!";
if(sex == 1)show "Parab�ns, voce agora � um Desordeiro!";
jobchange 4018;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

menestrel:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Cigana!";
if(sex == 1)show "Parab�ns, voce agora � um Menestrel!";
jobchange 4021;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

mestre:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Mestra!";
if(sex == 1)show "Parab�ns, voce agora � um Mestra!";
jobchange 4016;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

criador:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Criadora!";
if(sex == 1)show "Parab�ns, voce agora � um Criador!";
jobchange 4019;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

lorde:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Lady!";
if(sex == 1)show "Parab�ns, voce agora � um Lorde!";
jobchange 4008;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

paladino:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Paladina!";
if(sex == 1)show "Parab�ns, voce agora � um Paladino!";
jobchange 4015;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

mestreferreiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Mestre-Ferreira!";
if(sex == 1)show "Parab�ns, voce agora � um Mestre-Ferreiro!";
jobchange 4011;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

atirador:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Atidarora de Elite!";
if(sex == 1)show "Parab�ns, voce agora � um Atirador de Elite!";
jobchange 4012;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

sumo:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Sumo-Sacerdotiza!";
if(sex == 1)show "Parab�ns, voce agora � um Sumo-Sacerdote!";
jobchange 4009;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

arquimago:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Arquimaga!";
if(sex == 1)show "Parab�ns, voce agora � um Arquimago!";
jobchange 4010;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

professor:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Professora!";
if(sex == 1)show "Parab�ns, voce agora � um Professor!";
jobchange 4017;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babyespadachim:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Espadashin!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Espadashin!";
jobchange 2024;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babygatuno:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Gatuna!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Gatuno!";
jobchange 4029;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babymago:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby maga!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Mago!";
jobchange 4025;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1010,1,0;
close;

babynovico:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Novi�a!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Novi�o!";
jobchange 4027;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babymercador:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Mercadora!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Mercador!";
jobchange 4028;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1010,1,0;
close;

babyarqueiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Arqueira!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Arqueiro!";
jobchange 4026;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babyaprendiz:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Aprendiz!";
if(sex == 1)show "Parab�ns, voce agora � um Aprendiz!";
jobchange 4023;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babysuperaprendiz:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Super Aprendiz!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Super Aprendiz!";
jobchange 4045;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babycavaleiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Cavaleira!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Cavaleiro!";
jobchange 4030;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babymercenario:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Mercenaria!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Mercenario!";
jobchange 4035;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
skill 1010,1,0;
close;

babysacerdote:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Sacerdotiza!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Sacerdote!";
jobchange 4031;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babyferreiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Ferreira!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Ferreiro!";
jobchange 4033;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babycacador:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Ca�adora!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Ca�ador!";
jobchange 4034;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babybruxo:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Bruxa!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Bruxo!";
jobchange 4032;
skill 1010,1,0;
close;

babymonge:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Monja!";
if(sex == 1)show "Parab�ns, voce agora � um Monge!";
jobchange 4038;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babyalquimista:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Alquimista!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Alquimista!";
jobchange 4041;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babybardo:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Odalisca!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Bardo!";
jobchange 4042;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babyarruaceiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Arruaceira!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Arruaceiro!";
jobchange 4040;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babysabio:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Sabia!";
if(sex == 1)show "Parab�ns, voce agora � um Baby Sabio!";
jobchange 4039;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

babytemplario:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Baby Templaria!";
if(sex == 1)show "Parab�ns, voce agora � um baby Templario!";
jobchange 4037;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

taekwon:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Taekwon!";
if(sex == 1)show "Parab�ns, voce agora � um Taekwon!";
jobchange 4046;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

mestretaekwon:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Mestra Taekwon!";
if(sex == 1)show "Parab�ns, voce agora � um Mestre Taekwon!";
jobchange 4047;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

espiritualista:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Espiritualista!";
if(sex == 1)show "Parab�ns, voce agora � um Espiritualista!";
jobchange 4049;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

justiceiro:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Justiceira!";
if(sex == 1)show "Parab�ns, voce agora � um Justiceiro!";
jobchange 24;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

ninja:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Ninja!";
if(sex == 1)show "Parab�ns, voce agora � um Ninja!";
jobchange 25;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;

superaprendiz:
next;
show $@nome$;
if(sex == 0)show "Parab�ns, voce agora � uma Super Aprendiz!";
if(sex == 1)show "Parab�ns, voce agora � um Super Aprendiz!";
jobchange 23;
atcommand "@allskill"; set JobLevel,JobLevel+$@job;
close;


nao:
next;
show $@nome$;
show "Tudo bem,";
show "Estarei esperando.";
close;

//Configura�oes do NPC.
Oninit:
set $@needpoint,0;
set $@needequip,0;
set $@needzeny,0;
set $@questskill,0;
set $@nome$,"[^FF8000Mestra das Classes^000000]";
set $@level,99;
set $@job,70;
end;
}
}
