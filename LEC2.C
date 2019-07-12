

#include<stdio.h>
#include<conio.h>
#include<graphics.h> \
#include<stdlib.h>
//LOADING CIRCLE
void print(int get,int cxx,int cyy){
    int txt,cx=cxx-8,cy=cyy-20;
    txt=get/10;
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
    if(txt == 0)
	outtextxy(cx,cy,"W");
    else if(txt == 1)
	{
	setcolor(BLACK);
	outtextxy(cx,cy,"W");
	setcolor(WHITE);
	outtextxy(cx,cy,"E");
	}
    else if(txt == 2)
    {
	setcolor(BLACK);
	outtextxy(cx,cy,"E");
	setcolor(WHITE);
	outtextxy(cx,cy,"L");
    }
    else if(txt == 3)
	{
	setcolor(BLACK);
	outtextxy(cx,cy,"L");
	setcolor(WHITE);
	outtextxy(cx,cy,"C");
    }
    else if(txt == 4)
    {
    setcolor(BLACK);
	outtextxy(cx,cy,"C");
	setcolor(WHITE);
	outtextxy(cx,cy,"O");
    }
    else if(txt == 5)
	{
	setcolor(BLACK);
	outtextxy(cx,cy,"O");
	setcolor(WHITE);
	outtextxy(cx,cy,"M");
	}
   else if(txt == 6)
   {
   setcolor(BLACK);
	outtextxy(cx,cy,"M");
	setcolor(WHITE);
	outtextxy(cx,cy,"E");
	}
   else if(txt == 7)  {
   setcolor(BLACK);
	outtextxy(cx,cy,"E");
	setcolor(WHITE);
	outtextxy(cx,cy,"T");
	}
   else if(txt == 8)
   {
	setcolor(BLACK);

	outtextxy(cx,cy,"T");
	setcolor(WHITE);
	outtextxy(cx,cy,"O");
	}
   else if(txt == 9)
	{
	setcolor(BLACK);
	outtextxy(cx,cy,"O");
	setcolor(WHITE);
	outtextxy(cx-15,cy,"LEC");

	}
   else
	{
	  setcolor(LIGHTGREEN);
	  circle(cxx,cyy,49);
	  delay(1000);
	}

}

//LOADING TEXT
void load(int get,int cxx,int cyy){
   int txt,cx=cxx,cy=cyy+50;
   txt=get/10;
   if(txt == 1)
      outtextxy(cx-100,cy,"L");
  if(txt == 2)
      outtextxy(cx-80,cy,"O");
  if(txt == 3)
      outtextxy(cx-60,cy,"A");
  if(txt == 4)
      outtextxy(cx-40,cy,"D");
  if(txt == 5)
      outtextxy(cx-20,cy,"I");
  if(txt == 6)
      outtextxy(cx,cy,"N");
  if(txt == 7)
      outtextxy(cx+20,cy,"G");
  if(txt == 8)
      outtextxy(cx+40,cy,".");
  if(txt == 9)
      outtextxy(cx+60,cy,".");
  if(txt == 10) {
      outtextxy(cx+80,cy," .");
      delay(1000);
      }
}
// MY INTRO

void intro(){
int x;
char a[8] = {'D','e','s','i','g','n','e','d'};
char b[3]={'a','n','d'};
char c[10]={'P','r','o','g','r','a','m','m','e','d'};
char d[2]={'b','y'};
char e[13]={'M','I','L','A','N',' ',' ','T','A','R','A','M','I'};
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t");
for(x=0;x<8;x++){
   printf("%c",a[x]);
   delay(100);
}
printf("  ");
for(x=0;x<3;x++){
   printf("%c",b[x]);
   delay(100);
}
printf("  ");
for(x=0;x<10;x++){
   printf("%c",c[x]);
   delay(100);
}
printf("  ");
for(x=0;x<2;x++){
   printf("%c",d[x]);
   delay(100);
}
printf("\n\t\t\t     ");
for(x=0;x<19;x++)
{
  printf("-");
  delay(20);
}
printf("\n\t\t\t     |  ");
for(x=0;x<13;x++){
   printf("%c",e[x]);
   delay(100);
}
printf("  |\n\t\t\t     ");
for(x=0;x<19;x++)
{
  printf("-");
  delay(20);
}
delay(2000);
}
//THANK YOU

void exit(){
int x;
char e[11]={'T','H','A','N','K',' ',' ','Y','O','U','!'};
printf("\n\n\n\n\t\t\t\t");
for(x=0;x<11;x++){
printf("%c",e[x]);
delay(80);
}
}


void lec(){
	// ----Building Start ---------//

//OuterLine  (boundary)
setcolor(RED);
setfillstyle(SOLID_FILL,WHITE);
rectangle(20,20,420,404);
floodfill(100,100,RED);
//title here
setcolor(BLUE);
settextstyle(SMALL_FONT,HORIZ_DIR,0);
outtextxy(26,21,"     L U M B I N I   E N G I N E E R I N G   C O L L E G E");

//below title
setcolor(RED);

line(20,35,420,35);


// outliner inner left
setcolor(RED);
line(92,35,92,344); //vertical
line(93,35,93,344); //vertical
line(20,102,92,102); //horizontal
line(20,103,92,103); //horizontal
line(20,161,92,161); //horizontal
line(20,162,92,162); //horizontal
line(20,220,92,220); //horizontal
line(20,221,92,221); //horizontal
line(20,281,92,281); //horizontal
line(20,282,92,282); //horizontal
line(20,344,92,344); //horizontal
line(20,345,92,345); //horizontal

//outliner inner right
setcolor(RED);
line(358,35,358,344); //vertical
line(359,35,359,344); //vertical
line(358,102,420,102); //horizontal
line(358,101,420,101); //horizontal
line(358,161,420,161); //horizontal
line(358,160,420,160); //horizontal
line(358,220,420,220); //horizontal
line(358,219,420,219); //horizontal
line(358,281,420,281); //horizontal
line(358,280,420,280); //horizontal
line(358,344,420,344); //horizontal
line(358,343,420,343); //horizontal

//---------------------------------------------

// 5th floor
   //window 1
   setcolor(RED);
   arc(60,67,0,180,17);
   arc(60,67,0,180,16);

   setcolor(BLACK);
   arc(60,67,0,180,13);
   line(47,67,73,67);
   rectangle(47,70,54,89);
   rectangle(56,70,63,89);
   rectangle(65,70,72,89);

   setcolor(RED);
   line(44,92,76,92);
   line(44,93,76,93);

   //window 2
   setcolor(RED);
   arc(177,67,0,180,16);
   arc(177,67,0,180,17);
   setcolor(BLACK);
   arc(177,67,0,180,13);
   line(164,67,190,67);
   rectangle(164,70,171,89);
   rectangle(173,70,180,89);
   rectangle(182,70,189,89);
   setcolor(RED);
   line(161,92,193,92);
   line(161,93,193,93);


    //window 3
   setcolor(RED);
   arc(230,67,0,180,16);
   arc(230,67,0,180,17);
   setcolor(BLACK);
   arc(230,67,0,180,13);
   line(217,67,243,67);
   rectangle(217,70,224,89);
   rectangle(226,70,233,89);
   rectangle(235,70,242,89);
   setcolor(RED);
   line(214,92,246,92);
   line(214,93,246,93);


    //window 4
   setcolor(RED);
   arc(280,67,0,180,16);
   arc(280,67,0,180,17);
   setcolor(BLACK);
   arc(280,67,0,180,13);
   line(267,67,293,67);
   rectangle(267,70,274,89);
   rectangle(276,70,283,89);
   rectangle(285,70,292,89);
   setcolor(RED);
   line(264,92,296,92);
   line(264,93,296,93);

   //window 5
   setcolor(RED);
   arc(331,67,0,180,16);
   arc(331,67,0,180,17);
   setcolor(BLACK);
   arc(331,67,0,180,13);
   line(318,67,344,67);
   rectangle(318,70,325,89);
   rectangle(327,70,334,89);
   rectangle(336,70,343,89);
   setcolor(RED);
   line(315,92,347,92);
   line(315,93,347,93);

   //window 6
   setcolor(RED);
   arc(387,67,0,180,16);
   arc(387,67,0,180,17);
   setcolor(BLACK);
   arc(387,67,0,180,13);
   line(374,67,400,67);
   rectangle(374,70,381,89);
   rectangle(383,70,390,89);
   rectangle(392,70,399,89);

   setcolor(RED);
   line(371,92,403,92);
   line(371,93,403,93);


 //-------------------------------------------------------------------------//
// 4th floor
   //window 1
   setcolor(RED);
   arc(60,128,0,180,16);
   arc(60,128,0,180,17);
   setcolor(BLACK);
   arc(60,128,0,180,13);
   line(47,128,73,128);
   rectangle(47,131,54,150);
   rectangle(56,131,63,150);
   rectangle(65,131,72,150);
   setcolor(RED);
   line(44,154,76,154);
   line(44,155,76,155);

   //window 2
   setcolor(RED);
   arc(177,128,0,180,16);
   arc(177,128,0,180,17);
   setcolor(BLACK);
   arc(177,128,0,180,13);
   line(164,128,190,128);
   rectangle(164,131,171,150);
   rectangle(173,131,180,150);
   rectangle(182,131,189,150);
   setcolor(RED);
   line(161,154,193,154);
   line(161,155,193,155);

    //window 3
   setcolor(RED);
   arc(230,128,0,180,16);
   arc(230,128,0,180,17);
   setcolor(BLACK);
   arc(230,128,0,180,13);
   line(217,128,243,128);
   rectangle(217,131,224,150);
   rectangle(226,131,233,150);
   rectangle(235,131,242,150);
   setcolor(RED);
   line(214,154,246,154);
   line(214,155,246,155);


    //window 4
   setcolor(RED);
   arc(280,128,0,180,16);
   arc(280,128,0,180,17);
   setcolor(BLACK);
   arc(280,128,0,180,13);
   line(267,128,293,128);
   rectangle(267,131,274,150);
   rectangle(276,131,283,150);
   rectangle(285,131,292,150);
   setcolor(RED);
   line(264,154,296,154);
   line(264,155,296,155);

   //window 5
   setcolor(RED);
   arc(331,128,0,180,16);
   arc(331,128,0,180,17);
   setcolor(BLACK);
   arc(331,128,0,180,13);
   line(318,128,344,128);
   rectangle(318,131,325,150);
   rectangle(327,131,334,150);
   rectangle(336,131,343,150);
   setcolor(RED);
   line(315,154,347,154);
   line(315,155,347,155);
   
   //window 6
   setcolor(RED);
   arc(387,128,0,180,16);
   arc(387,128,0,180,17);
   setcolor(BLACK);
   arc(387,128,0,180,13);
   line(374,128,400,128);
   rectangle(374,131,381,150);
   rectangle(383,131,390,150);
   rectangle(392,131,399,150);
   setcolor(RED);
   line(371,154,403,154);
   line(371,155,403,155);

   //-------------------------------------------------------------------------//
   
// 3rd floor
   //window 1
   setcolor(RED);
   arc(60,186,0,180,16);
   arc(60,186,0,180,17);
   setcolor(BLACK);
   arc(60,186,0,180,13);
   line(47,186,73,186);
   rectangle(47,189,54,208);
   rectangle(56,189,63,208);
   rectangle(65,189,72,208);
   setcolor(RED);
   line(44,212,76,212);
   line(44,213,76,213);

   //window 2
   setcolor(RED);
   arc(177,186,0,180,16);
   arc(177,186,0,180,17);
   setcolor(BLACK);
   arc(177,186,0,180,13);
   line(164,186,190,186);
   rectangle(164,189,171,208);
   rectangle(173,189,180,208);
   rectangle(182,189,189,208);
   setcolor(RED);
   line(161,212,193,212);
   line(161,213,193,213);

    //window 3
   setcolor(RED);
   arc(230,186,0,180,16);
   arc(230,186,0,180,17);
   setcolor(BLACK);
   arc(230,186,0,180,13);
   line(217,186,243,186);
   rectangle(217,189,224,208);
   rectangle(226,189,233,208);
   rectangle(235,189,242,208);
   setcolor(RED);
   line(214,212,246,212);
   line(214,213,246,213);


    //window 4
   setcolor(RED);
   arc(280,186,0,180,16);
   arc(280,186,0,180,17);
   setcolor(BLACK);
   arc(280,186,0,180,13);
   line(267,186,293,186);
   rectangle(267,189,274,208);
   rectangle(276,189,283,208);
   rectangle(285,189,292,208);
   setcolor(RED);
   line(264,212,296,212);
   line(264,213,296,213);
   
   //window 5
   setcolor(RED);
   arc(331,186,0,180,16);
   arc(331,186,0,180,17);
   setcolor(BLACK);
   arc(331,186,0,180,13);
   line(318,186,344,186);
   rectangle(318,189,325,208);
   rectangle(327,189,334,208);
   rectangle(336,189,343,208);
   setcolor(RED);
   line(315,212,347,212);
   line(315,213,347,213);
   
   //window 6
   setcolor(RED);
   arc(387,186,0,180,16);
   arc(387,186,0,180,17);
   setcolor(BLACK);
   arc(387,186,0,180,13);
   line(374,186,400,186);
   rectangle(374,189,381,208);
   rectangle(383,189,390,208);
   rectangle(392,189,399,208);
   setcolor(RED);
   line(371,212,403,212);
   line(371,213,403,213);

   //-------------------------------------------------------------------------//
   
// 2nd floor
   //window 1
   setcolor(RED);
   arc(60,246,0,180,16);
   arc(60,246,0,180,17);
   setcolor(BLACK);
   arc(60,246,0,180,13);
   line(47,246,73,246);
   rectangle(47,249,54,268);
   rectangle(56,249,63,268);
   rectangle(65,249,72,268);
   setcolor(RED);
   line(44,272,76,272);
   line(44,273,76,273);

   //window 2
   setcolor(RED);
   arc(177,246,0,180,16);
   arc(177,246,0,180,17);
   setcolor(BLACK);
   arc(177,246,0,180,13);
   line(164,246,190,246);
   rectangle(164,249,171,268);
   rectangle(173,249,180,268);
   rectangle(182,249,189,268);
   setcolor(RED);
   line(161,272,193,272);
   line(161,273,193,273);

 /*   //window 3
   setcolor(RED);
   arc(230,246,0,180,16);
   setcolor(BLACK);
   arc(230,246,0,180,13);
   line(217,246,243,246);
   rectangle(217,189,224,208);
   rectangle(226,189,233,208);
   rectangle(235,189,242,208);
   setcolor(RED);
   line(214,212,246,212);
*/


    //window 4
   setcolor(RED);
   arc(280,246,0,180,16);
   arc(280,246,0,180,17);
   setcolor(BLACK);
   arc(280,246,0,180,13);
   line(267,246,293,246);
   rectangle(267,249,274,268);
   rectangle(276,249,283,268);
   rectangle(285,249,292,268);
   setcolor(RED);
   line(264,272,296,272);
   line(264,273,296,273);
   
   //window 5
   setcolor(RED);
   arc(331,246,0,180,16);
   arc(331,246,0,180,17);
   setcolor(BLACK);
   arc(331,246,0,180,13);
   line(318,246,344,246);
   rectangle(318,249,325,268);
   rectangle(327,249,334,268);
   rectangle(336,249,343,268);
   setcolor(RED);
   line(315,272,347,272);
   line(315,273,347,273);
   
   //window 6
   setcolor(RED);
   arc(387,246,0,180,16);
   arc(387,246,0,180,17);
   setcolor(BLACK);
   arc(387,246,0,180,13);
   line(374,246,400,246);
   rectangle(374,249,381,268);
   rectangle(383,249,390,268);
   rectangle(392,249,399,268);
   setcolor(RED);
   line(371,272,403,272);
   line(371,273,403,273);


   
//-------------------------------------------------------------------------//
   
// 1st floor
   //window 1
   setcolor(RED);
   arc(60,304,0,180,16);
   arc(60,304,0,180,17);
   setcolor(BLACK);
   arc(60,304,0,180,13);
   line(47,304,73,304);
   rectangle(47,307,54,326);
   rectangle(56,307,63,326);
   rectangle(65,307,72,326);
   setcolor(RED);
   line(44,330,76,330);
   line(44,331,76,331);

   //window 2
   setcolor(RED);
   arc(177,304,0,180,16);
   arc(177,304,0,180,17);
   setcolor(BLACK);
   arc(177,304,0,180,13);
   line(164,304,190,304);
   rectangle(164,307,171,326);
   rectangle(173,307,180,326);
   rectangle(182,307,189,326);
   setcolor(RED);
   line(161,330,193,330);
   line(161,331,193,331);

 /*   //window 3
   setcolor(RED);
   arc(230,246,0,180,16);
   setcolor(BLACK);
   arc(230,246,0,180,13);
   line(217,246,243,246);
   rectangle(217,189,224,208);
   rectangle(226,189,233,208);
   rectangle(235,189,242,208);
   setcolor(RED);
   line(214,212,246,212);
*/


    //window 4
   setcolor(RED);
   arc(280,304,0,180,16);
   arc(280,304,0,180,17);
   setcolor(BLACK);
   arc(280,304,0,180,13);
   line(267,304,293,304);
   rectangle(267,307,274,326);
   rectangle(276,307,283,326);
   rectangle(285,307,292,326);
   setcolor(RED);
   line(264,330,296,330);
   line(264,331,296,331);
   
   //window 5
   setcolor(RED);
   arc(331,304,0,180,16);
   arc(331,304,0,180,17);
   setcolor(BLACK);
   arc(331,304,0,180,13);
   line(318,304,344,304);
   rectangle(318,307,325,326);
   rectangle(327,307,334,326);
   rectangle(336,307,343,326);
   setcolor(RED);
   line(315,330,347,330);
   line(315,331,347,331);
   
   //window 6
   setcolor(RED);
   arc(387,304,0,180,16);
   arc(387,304,0,180,17);
   setcolor(BLACK);
   arc(387,304,0,180,13);
   line(374,304,400,304);
   rectangle(374,307,381,326);
   rectangle(383,307,390,326);
   rectangle(392,307,399,326);
   setcolor(RED);
   line(371,330,403,330);
   line(371,331,403,331);

   //-------------------------------------------------------------------------//
   
   
// Ground floor
   //window 1
   setcolor(RED);
   arc(60,366,0,180,16);
   arc(60,366,0,180,17);
   setcolor(BLACK);
   arc(60,366,0,180,13);
   line(47,366,73,366);
   rectangle(47,369,54,388);
   rectangle(56,369,63,388);
   rectangle(65,369,72,388);
   setcolor(RED);
   line(44,392,76,392);
   line(44,393,76,393);

   //window 2
   setcolor(RED);
   arc(177,366,0,180,16);
    arc(177,366,0,180,17);
   setcolor(BLACK);
   arc(177,366,0,180,13);
   line(164,366,190,366);
   rectangle(164,369,171,388);
   rectangle(173,369,180,388);
   rectangle(182,369,189,388);
   setcolor(RED);
   line(161,392,193,392);
   line(161,393,193,393);

 /*   //window 3
   setcolor(RED);
   arc(230,246,0,180,16);
   setcolor(BLACK);
   arc(230,246,0,180,13);
   line(217,246,243,246);
   rectangle(217,189,224,208);
   rectangle(226,189,233,208);
   rectangle(235,189,242,208);
   setcolor(RED);
   line(214,212,246,212);
*/


    //window 4
   setcolor(RED);
   arc(280,366,0,180,16);
   arc(280,366,0,180,17);
   setcolor(BLACK);
   arc(280,366,0,180,13);
   line(267,366,293,366);
   rectangle(267,369,274,388);
   rectangle(276,369,283,388);
   rectangle(285,369,292,388);
   setcolor(RED);
   line(264,392,296,392);
   line(264,393,296,393);
   
   //window 5
   setcolor(RED);
   arc(331,366,0,180,16);
   arc(331,366,0,180,17);
   setcolor(BLACK);
   arc(331,366,0,180,13);
   line(318,366,344,366);
   rectangle(318,369,325,388);
   rectangle(327,369,334,388);
   rectangle(336,369,343,388);
   setcolor(RED);
   line(315,392,347,392);
   line(315,393,347,393);
   
   //window 6
   setcolor(RED);
   arc(387,366,0,180,16);
   arc(387,366,0,180,17);
   setcolor(BLACK);
   arc(387,366,0,180,13);
   line(374,366,400,366);
   rectangle(374,369,381,388);
   rectangle(383,369,390,388);
   rectangle(392,369,399,388);
   setcolor(RED);
   line(371,392,403,392);
   line(371,393,403,393);

   //----------------------------------------//
   
 //WINDOW LONG
 setcolor(BLACK);
 rectangle(109,57,127,154); //upper

 rectangle(109,165,127,357); //lower
 
 arc(118,357,180,360,9);  

 //----------------------------------//

//DOOR FRONT MAIN
setcolor(RED);
rectangle(209,220,245,404); 

circle(227,270,8); //*
circle(227,290,8); //*

circle(227,330,8); //**
circle(227,350,8); //**

circle(227,380,8); //***



line(209,229,227,227);//1*
line(209,233,227,231);//1*
line(227,227,227,231);//1*

line(209,237,227,235);//2*
line(209,241,227,239);//2*
line(227,234,227,239);//2*   
   
line(209,245,227,243);//3*
line(209,249,227,247);//3*
line(227,242,227,247);//3*   

line(209,253,227,251);//4*
line(209,257,227,255);//4*
line(227,250,227,255);//4*   

//DOOR SIDE
//LEFT

line(199,272,199,343);
line(199,272,209,272) ;
line(199,343,209,343);
arc(209,280,90,180,4);
line(205,280,205,335);
arc(209,335,180,270,4);

//RIGHT
line(255,272,255,343);
line(245,272,255,272);
line(245,343,255,343);
arc(245,280,0,90,4);
line(249,280,249,335);
arc(245,335,270,0,4);


//DOOR

line(199,347,199,404);//LEFT
line(199,347,209,347) ;

line(204,350,204,404);
line(204,350,209,350);

line(255,347,255,404);//RIGHT
line(245,347,255,347);

line(250,350,250,404);
line(245,350,250,350);


//COLOR FILL
//Window color fill


setfillstyle(SOLID_FILL,LIGHTGRAY);
//5th floor

//window1
floodfill(60,66,BLACK);
floodfill(49,73,BLACK);
floodfill(57,73,BLACK);
floodfill(68,73,BLACK);
//window2
floodfill(177,66,BLACK);
floodfill(166,73,BLACK);
floodfill(175,73,BLACK);
floodfill(185,73,BLACK);
//window3
floodfill(233,66,BLACK);
floodfill(220,73,BLACK);
floodfill(229,73,BLACK);
floodfill(238,73,BLACK);
//window4
floodfill(283,66,BLACK);
floodfill(270,73,BLACK);
floodfill(279,73,BLACK);
floodfill(289,73,BLACK);
//window5
floodfill(334,66,BLACK);
floodfill(321,73,BLACK);
floodfill(330,73,BLACK);
floodfill(339,73,BLACK);
//window6
floodfill(390,66,BLACK);
floodfill(377,73,BLACK);
floodfill(386,73,BLACK);
floodfill(395,73,BLACK);

//----------------------------------//
//4th floor
//window1
floodfill(63,124,BLACK);
floodfill(50,134,BLACK);
floodfill(59,134,BLACK);
floodfill(69,134,BLACK);

//window2
floodfill(180,124,BLACK);
floodfill(167,134,BLACK);
floodfill(177,134,BLACK);
floodfill(185,134,BLACK);

//window3
floodfill(230,124,BLACK);
floodfill(220,134,BLACK);
floodfill(229,134,BLACK);
floodfill(238,134,BLACK);

//window4
floodfill(280,124,BLACK);
floodfill(270,134,BLACK);
floodfill(279,134,BLACK);
floodfill(289,134,BLACK);

//window5
floodfill(331,124,BLACK);
floodfill(321,134,BLACK);
floodfill(330,134,BLACK);
floodfill(339,134,BLACK);

//window6
floodfill(387,124,BLACK);
floodfill(377,134,BLACK);
floodfill(386,134,BLACK);
floodfill(395,134,BLACK);

//---------------------------//
//3RD FLOOR
//window1
floodfill(60,183,BLACK);
floodfill(50,192,BLACK);
floodfill(59,192,BLACK);
floodfill(69,192,BLACK);

//window2
floodfill(180,183,BLACK);
floodfill(167,192,BLACK);
floodfill(177,192,BLACK);
floodfill(185,192,BLACK);

//window3
floodfill(230,183,BLACK);
floodfill(220,192,BLACK);
floodfill(229,192,BLACK);
floodfill(238,192,BLACK);

//window4
floodfill(280,183,BLACK);
floodfill(270,192,BLACK);
floodfill(279,192,BLACK);
floodfill(289,192,BLACK);

//window5
floodfill(331,183,BLACK);
floodfill(321,192,BLACK);
floodfill(330,192,BLACK);
floodfill(339,192,BLACK);

//window6
floodfill(387,183,BLACK);
floodfill(377,192,BLACK);
floodfill(386,192,BLACK);
floodfill(395,192,BLACK);


//----------------------------//
//2ND FLOOR
//window1
floodfill(60,241,BLACK);
floodfill(49,252,BLACK);
floodfill(57,252,BLACK);
floodfill(68,252,BLACK);

//window2
floodfill(177,241,BLACK);
floodfill(166,252,BLACK);
floodfill(175,252,BLACK);
floodfill(185,252,BLACK);

/*
//window3
floodfill(,241,BLACK);
floodfill(,252,BLACK);
floodfill(,252,BLACK);
floodfill(,252,BLACK);*/

//window4
floodfill(283,241,BLACK);
floodfill(270,252,BLACK);
floodfill(279,252,BLACK);
floodfill(289,252,BLACK);

//window5
floodfill(334,241,BLACK);
floodfill(321,252,BLACK);
floodfill(330,252,BLACK);
floodfill(339,252,BLACK);

//window6
floodfill(390,241,BLACK);
floodfill(377,252,BLACK);
floodfill(386,252,BLACK);
floodfill(395,252,BLACK);

//------------------------------------------------//
//1ST FLOOR
//window
floodfill(60,301,BLACK);
floodfill(49,310,BLACK);
floodfill(57,310,BLACK);
floodfill(68,310,BLACK);

//window2
floodfill(177,301,BLACK);
floodfill(166,310,BLACK);
floodfill(175,310,BLACK);
floodfill(185,310,BLACK);

/*
//window3
floodfill(,301,BLACK);
floodfill(,310,BLACK);
floodfill(,310,BLACK);
floodfill(,310,BLACK);*/


//window4
floodfill(283,301,BLACK);
floodfill(270,310,BLACK);
floodfill(279,310,BLACK);
floodfill(289,310,BLACK);


//window5
floodfill(334,301,BLACK);
floodfill(321,310,BLACK);
floodfill(330,310,BLACK);
floodfill(339,310,BLACK);


//window6
floodfill(390,301,BLACK);
floodfill(377,310,BLACK);
floodfill(386,310,BLACK);
floodfill(395,310,BLACK);

//GROUND FLOOR
//window1
floodfill(60,363,BLACK);
floodfill(49,372,BLACK);
floodfill(57,372,BLACK);
floodfill(68,372,BLACK);

//window2
floodfill(177,363,BLACK);
floodfill(166,372,BLACK);
floodfill(175,372,BLACK);
floodfill(185,372,BLACK);

/*
//window3
floodfill(,363,BLACK);
floodfill(,366,BLACK);
floodfill(,366,BLACK);
floodfill(,366,BLACK);
*/

//window4
floodfill(283,363,BLACK);
floodfill(270,372,BLACK);
floodfill(279,372,BLACK);
floodfill(289,372,BLACK);


//window5
floodfill(334,363,BLACK);
floodfill(321,372,BLACK);
floodfill(330,372,BLACK);
floodfill(339,372,BLACK);


//window6
floodfill(390,363,BLACK);
floodfill(377,372,BLACK);
floodfill(386,372,BLACK);
floodfill(395,372,BLACK);


//long window fill
setfillstyle(HATCH_FILL,LIGHTGRAY);
floodfill(110,58,BLACK);
floodfill(110,166,BLACK);
floodfill(119,358,BLACK) ;


//door front
setfillstyle(SOLID_FILL,RED);
floodfill(227,390,RED);


setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(208,282,RED);
floodfill(247,282,RED);
floodfill(200,348,RED);
floodfill(252,352,RED);


// ----Building Finished ---------//



//--- Tree Start ---------//

//trunk
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
rectangle(523,258,547,404);
floodfill(542,400,BROWN);

//leaves
setcolor(LIGHTGREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);

arc(499,235,90,320,40); //c1
arc(563,246,195,405,40); //c2
arc(523,180,130,225,40); //c3
arc(563,195,285,435,40); //c4
arc(563,140,295,445,40);
arc(499,129,90,270,40);
arc(535,89,330,550,40);

floodfill(535,89,LIGHTGREEN);

}

void main(){
static int cx,cy,a,percent;
float per,p;
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
cx=(getmaxx()/2);
cy=(getmaxy()/2)-50;


 circle(cx,cy,34);
 circle(cx,cy,39);
 for(a=0;a<=360;a++)
 {
   p = a;
   per = (p/360)*100;
   percent = (int)per;
   arc(cx,cy,0,0+a,35);
   arc(cx,cy,0,0+a,36);
   arc(cx,cy,0,0+a,37);
   arc(cx,cy,0,0+a,38);
   print(percent,cx,cy);
   load(percent,cx,cy);
   delay(20) ;
    if(a == 360){
     cleardevice();
     intro();
     cleardevice();
     delay(2000);
     lec();
	getch();

	cleardevice();
	exit();

	delay(2000);

	}




 }
   getch();
   closegraph();
   }