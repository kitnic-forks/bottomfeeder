#include "waveDefs.h"
#include "Arduino.h"

const char *waveforms[] = {
  NULL,
 "basic_saw.w",//1
 "basic_sin.w",//2
 "basic_squ.w",//3
 "basic_tri.w",//4
 "birds1.w",//5
 "birds2.w",//6
 "birds3.w",//7
 "bit1.w",//8
 "bit2.w",//9
 "bit3.w",//10
 "blend1.w",//11
 "blend2.w",//12
 "blend3.w",//13
 "blend4.w",//14
 "blend5.w",//15
 "cello1.w",//16
 "cello2.w",//17
 "cello3.w",//18
 "clari1.w",//19
 "clari2.w",//20
 "clari3.w",//21
 "clav1.w",//22
 "clav2.w",//23
 "clav3.w",//24
 "dbass1.w",//25
 "dbass2.w",//26
 "dbass3.w",//27
 "distorted1.w",//28
 "distorted2.w",//29
 "distorted3.w",//30
 "ebass1.w",//31
 "ebass2.w",//32
 "ebass3.w",//33
 "eorgan1.w",//34
 "eorgan2.w",//35
 "eorgan3.w",//36
 "eorgan4.w",//37
 "epiano1.w",//38
 "epiano2.w",//39
 "epiano3.w",//40
 "epiano4.w",//41
 "epiano5.w",//42
 "flute1.w",//43
 "flute2.w",//44
 "flute3.w",//45
 "granular1.w",//46
 "granular2.w",//47
 "granular3.w",//48
 "guitara1.w",//49
 "guitara2.w",//50
 "misc1.w",//51
 "misc10.w",//52
 "misc11.w",//53
 "misc12.w",//54
 "misc13.w",//55
 "misc14.w",//56
 "misc15.w",//57
 "misc2.w",//58
 "misc3.w",//59
 "misc4.w",//60
 "misc5.w",//61
 "misc6.w",//62
 "misc7.w",//63
 "misc8.w",//64
 "misc9.w",//65
 "oscchip1.w",//66
 "oscchip2.w",//67
 "oscchip3.w",//68
 "overtone1.w",//69
 "overtone2.w",//70
 "overtone3.w",//71
 "overtone4.w",//72
 "overtone5.w",//73
 "piano1.w",//74
 "piano2.w",//75
 "piano3.w",//76
 "saw1.w",//77
 "saw2.w",//78
 "saw3.w",//79
 "saw4.w",//80
 "saw5.w",//81
 "sawb1.w",//82
 "sawgap1.w",//83
 "sawgap2.w",//84
 "sawr1.w",//85
 "saws6.w",//86
 "sax1.w",//87
 "sax2.w",//88
 "sax3.w",//89
 "sinharm01.w",//90
 "sinharm02.w",//91
 "sinharm03.w",//92
 "sinharm04.w",//93
 "sinharm05.w",//94
 "sinharm06.w",//95
 "sinharm07.w",//96
 "sinharm08.w",//97
 "sinharm09.w",//98
 "sinharm10.w",//99
 "sinharm11.w",//100
 "sinharm12.w",//101
 "squ1.w",//102
 "squ2.w",//103
 "squ3.w",//104
 "squ4.w",//105
 "squ5.w",//106
 "squ6.w",//107
 "squ7.w",//108
 "squr1.w",//109
 "squr2.w",//110
 "theremin1.w",//111
 "theremin2.w",//112
 "theremin3.w",//113
 "vgame1.w",//114
 "vgame2.w",//115
 "vgame3.w",//116
 "vgsaw.w",//117
 "vgsin.w",//118
 "vgsq.w",//119
 "vgtri.w",//120
 "violin1.w",//121
 "violin2.w",//122
 "violin3.w",//123
 "voice1.w",//124
 "voice2.w",//125
 "voice3.w",//126
 NULL
};