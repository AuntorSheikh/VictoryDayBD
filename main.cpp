#include <graphics.h>
#include <windows.h>
#define ScreenHeight getmaxx()
#define ScreenWidth getmaxy()
#define YGround ScreenHeight*0.65
int big_flag();
int flag();
int person();
int person_new();
int intro();
int clock();
int Rain();
int x=100;
int main()
{
	initwindow(800,800);
	clock();
	cleardevice();
	big_flag();
	cleardevice();
	intro();
	cleardevice();
	delay(1000);
	flag();
	person();
	settextstyle(EUROPEAN_FONT,0,4);
	Rain();
	cleardevice();
	while(!kbhit())
	{
		person_new();
		settextstyle(EUROPEAN_FONT,0,1);
		outtextxy(80,515,"Auntor Sheikh");
		settextstyle(EUROPEAN_FONT,0,4);
		setcolor(RED);
		outtextxy(400,100,"I Love");
		setcolor(RED);
		outtextxy(400,150,"Bangladesh");
		setcolor(GREEN);
		Rain();
		delay(35);
		cleardevice();
	}
	getch();
	return 0;
}
int flag()
{
	////boxes
		setcolor(3);
		line(100,450,200,450);///box1
		delay(x);
		line(100,450,100,500);///box1
		delay(x);
		line(200,450,200,500);///box1
		delay(x);
		line(50,500,250,500);///box1 and 2
		delay(x);
		line(250,500,250,550);///box2
		delay(x);
		line(50,500,50,550);///box2
		delay(x);
		line(0,550,850,550);///box2

		////danda
		setcolor(WHITE);
		line(150,80,150,450);///Danda
		delay(x);
		line(150,80,155,450);///Danda
		delay(x);
		line(150,80,160,450);///Danda
		delay(x);

		////flag
		setcolor(GREEN);
		line(150,200,350,200);///Flag1
		delay(x);
		setcolor(WHITE);
		line(150,80,350,80);///Flag2
		delay(x);
		line(150,85,350,85);///Flag2
		delay(x);
		line(150,90,350,90);///Flag2
		delay(x);
		line(150,90,350,90);///Flag2
		delay(x);
		line(150,95,350,95);///Flag2
		delay(x);
		line(150,100,350,100);///Flag2
		delay(x);
		line(150,105,350,105);///Flag2
		delay(x);
		line(150,110,350,110);///Flag2
		delay(x);
		line(150,115,350,115);///Flag2
		delay(x);
		line(150,120,350,120);///Flag2
		delay(x);
		line(150,125,350,125);///Flag2
		delay(x);
		line(150,130,350,130);///Flag2
		delay(x);
		line(150,135,350,135);///Flag2
		delay(x);
		line(150,140,350,140);///Flag2
		delay(x);
		line(150,145,350,145);///Flag2
		delay(x);
		line(150,150,350,150);///Flag2
		delay(x);
		line(150,155,350,155);///Flag2
		delay(x);
		line(150,160,350,160);///Flag2
		delay(x);
		line(150,165,350,165);///Flag2
		delay(x);
		line(150,170,350,170);///Flag2
		delay(x);
		line(150,175,350,175);///Flag2
		delay(x);
		line(150,180,350,180);///Flag2
		delay(x);
		line(150,185,350,185);///Flag2
		delay(x);
		line(150,190,350,190);///Flag2
		delay(x);
		line(150,195,350,195);///Flag2
		delay(x);
		line(150,200,350,200);///Flag2
		delay(x);
		setcolor(GREEN);
		line(150,80,350,80);///Flag2
		delay(x);
		line(150,85,350,85);///Flag2
		delay(x);
		line(150,90,350,90);///Flag2
		delay(x);
		line(150,95,350,95);///Flag2
		delay(x);
		line(150,100,350,100);///Flag2
		delay(x);
		line(150,105,350,105);///Flag2
		delay(x);
		line(150,110,350,110);///Flag2
		delay(x);
		line(150,115,350,115);///Flag2
		delay(x);
		line(150,120,350,120);///Flag2
		delay(x);
		line(150,125,350,125);///Flag2
		delay(x);
		line(150,130,350,130);///Flag2
		delay(x);
		line(150,135,350,135);///Flag2
		delay(x);
		line(150,140,350,140);///Flag2
		delay(x);
		line(150,145,350,145);///Flag2
		delay(x);
		line(150,150,350,150);///Flag2
		delay(x);
		line(150,155,350,155);///Flag2
		delay(x);
		line(150,160,350,160);///Flag2
		delay(x);
		line(150,165,350,165);///Flag2
		delay(x);
		line(150,170,350,170);///Flag2
		delay(x);
		line(150,175,350,175);///Flag2
		delay(x);
		line(150,180,350,180);///Flag2
		delay(x);
		line(150,185,350,185);///Flag2
		delay(x);
		line(150,190,350,190);///Flag2
		delay(x);
		line(150,195,350,195);///Flag2
		delay(x);
		line(150,200,350,200);///Flag2
		delay(x);

		setcolor(RED);
		circle(250,140,35);
		setfillstyle(SOLID_FILL,RED);
		floodfill(250,140,RED);
		delay(x);

	return 0;
}
int person()
{
	///1st person
		setcolor(WHITE);
		circle(500,350,25);///person1 of 1
		setcolor(GREEN);
		delay(x);
		line(500,375,500,450);///person2 of 1
		delay(x);
		setcolor(WHITE);
		line(500,450,530,545);///person3 of 1
		delay(x);
		line(500,450,480,545);///person3 of 1
		delay(x);
		setcolor(GREEN);
		line(450,380,500,420);///person3 of 1
		delay(x);
		line(450,380,475,345);///person4 of 1
		delay(x);
		line(470,340,475,340);///person5 of 1
		delay(x);
		line(470,343,475,343);///person6 of 1
		delay(x);
		line(485,340,495,340);///person7 of 1
		delay(x);
		line(490,350,490,355);///person8 of 1
		delay(x);
		arc(490,350,250,300,10);///person9 of 1
		delay(x);

		///2nd person
		setcolor(WHITE);
		delay(x);
		circle(600,350,25);///person1 of 2
		setcolor(GREEN);
		delay(x);
		line(600,375,600,450);///person2 of 2
		delay(x);
		setcolor(WHITE);
		line(600,450,630,545);///person3 of 2
		delay(x);
		line(600,450,580,545);///person3 of 2
		delay(x);
		setcolor(GREEN);
		line(550,380,600,420);///person3 of 2
		delay(x);
		line(550,380,575,345);///person4 of 2
		delay(x);
		line(570,340,575,340);///person5 of 2
		delay(x);
		line(570,343,575,343);///person6 of 2
		delay(x);
		line(585,340,595,340);///person7 of 2
		delay(x);
		line(590,350,590,355);///person8 of 2
		delay(x);
		arc(590,350,250,300,10);///person9 of 2
		delay(x);

		///3rd person
		setcolor(WHITE);
		circle(400,440,20);///person1 of 3
		delay(x);
		setcolor(GREEN);
		line(400,465,400,500);///person2 of 3
		delay(x);
		setcolor(WHITE);
		line(400,500,430,545);///person3 of 3
		delay(x);
		line(400,500,380,545);///person3 of 3
		delay(x);
		setcolor(GREEN);
		line(360,450,400,490);///person3 of 3
		delay(x);
		line(360,450,380,445);///person4 of 3
		delay(x);

		line(370,430,375,430);///person5 of 2
		delay(x);
		line(370,433,375,433);///person6 of 2
		delay(x);
		line(385,430,395,430);///person7 of 2
		delay(x);
		line(390,440,390,445);///person8 of 2
		delay(x);
		arc(390,440,250,300,10);///person9 of 2
		delay(x);


		///4nd person
		setcolor(WHITE);
		delay(x);
		circle(700,350,25);///person1 of 2
		setcolor(GREEN);
		delay(x);
		line(700,375,700,450);///person2 of 2
		delay(x);
		setcolor(WHITE);
		line(700,450,730,545);///person3 of 2
		delay(x);
		line(700,450,680,545);///person3 of 2
		delay(x);
		setcolor(GREEN);
		line(650,380,700,420);///person3 of 2
		delay(x);
		line(650,380,675,345);///person4 of 2
		delay(x);
		line(670,340,675,340);///person5 of 2
		delay(x);
		line(670,343,675,343);///person6 of 2
		delay(x);
		line(685,340,695,340);///person7 of 2
		delay(x);
		line(690,350,690,355);///person8 of 2
		delay(x);
		arc(690,350,250,300,10);///person9 of 2
		delay(x);


	return 0;
}

int intro()
{
	int k=0,l;
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(RED);
	outtextxy(100,700, "HAPPY VICTORY  DAY");
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(WHITE);
	outtextxy(150,150, "Victory Day of Bangladesh");
	settextstyle(EUROPEAN_FONT,0,3);
	setcolor(GREEN);
	outtextxy(150,300, "Bangladesh got the Victory  on 16 December");
	outtextxy(150,340, "Thus every year on this day we celebrate as");
	outtextxy(150,380, "Victory day. After struggling for nine month.");
	outtextxy(150,500, "About 30 lacs people sacrifice their lives to acquire");
	outtextxy(150,540, "FREEDOM.");
	settextstyle(EUROPEAN_FONT,3,4);
	setcolor(GREEN);
	outtextxy(50,100, "HAPPY VICTORY DAY");
	delay(7000);
	return 0;
}
int big_flag()
{

	setcolor(GREEN);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(51,51,GREEN);

	setcolor(WHITE);
	rectangle(40,40,50,300);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(41,41,WHITE);

	setcolor(RED);
	circle(130,100,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(131,101,RED);

	settextstyle(EUROPEAN_FONT,0,4);
	outtextxy(200,300,"HAPPY VICTORY  DAY");
	outtextxy(230,400,"JOY BANGLA");
	delay(7000);
	cleardevice();
	return 0;
}
int clock()
{
	for(int i=0;i<200;i+=15)
	{
		circle(400,400,250);
		setcolor(rand());
		settextstyle(EUROPEAN_FONT,0,4);
		outtextxy(380,180,"12");
		outtextxy(380,600,"06");
		outtextxy(600,380,"03");
		outtextxy(180,380,"09");
		outtextxy(400,380,".");
		delay(500);
		Beep(2100,250);
		cleardevice();
		line(400,400,200+(i+10),380-i);

	}
		Beep(2500,200);
}
int Rain()
{
	int i,rx,ry;
    for(i=0;i<rand();i++)
    {
    	setcolor(rand());
         rx=rand() % ScreenWidth;
         ry=rand() % ScreenHeight;
         if(ry<YGround)line(rx,ry+20,rx,ry);
    }

}
int person_new()
{
	setcolor(3);
		line(100,450,200,450);///box1
		line(100,450,100,500);///box1
		line(200,450,200,500);///box1
		line(50,500,250,500);///box1 and 2
		line(250,500,250,550);///box2
		line(50,500,50,550);///box2
		line(0,550,850,550);///box2

		////danda
		setcolor(WHITE);
		line(150,80,150,450);///Danda
		line(150,80,155,450);///Danda
		line(150,80,160,450);///Danda

		////flag
		setcolor(GREEN);
		line(150,200,350,200);///Flag1
		line(150,80,250,80);///Flag2
		line(150,85,250,85);///Flag2
		line(150,90,250,90);///Flag2
		line(150,90,350,90);///Flag2
		line(150,95,350,95);///Flag2
		line(150,100,350,100);///Flag2
		line(150,105,350,105);///Flag2
		line(150,110,350,110);///Flag2
		line(150,115,350,115);///Flag2
		line(150,120,350,120);///Flag2
		line(150,125,350,125);///Flag2
		line(150,130,350,130);///Flag2
		line(150,135,350,135);///Flag2
		line(150,140,350,140);///Flag2
		line(150,145,350,145);///Flag2
		line(150,150,350,150);///Flag2
		line(150,155,350,155);///Flag2
		line(150,160,350,160);///Flag2
		line(150,165,350,165);///Flag2
		line(150,170,350,170);///Flag2
		line(150,175,350,175);///Flag2
		line(150,180,350,180);///Flag2
		line(150,185,350,185);///Flag2
		line(150,190,350,190);///Flag2
		line(150,195,350,195);///Flag2
		line(150,200,350,200);///Flag2
		setcolor(GREEN);
		line(200,80,350,80);///Flag2
		line(200,85,350,85);///Flag2
		line(200,90,350,90);///Flag2
		line(200,95,350,95);///Flag2
		line(200,100,350,100);///Flag2
		line(200,105,350,105);///Flag2
		line(200,110,350,110);///Flag2
		line(200,115,350,115);///Flag2
		line(200,120,350,120);///Flag2
		line(200,125,350,125);///Flag2
		line(200,130,350,130);///Flag2
		line(200,135,350,135);///Flag2
		line(200,140,350,140);///Flag2
		line(200,145,350,145);///Flag2
		line(200,150,350,150);///Flag2
		line(200,155,350,155);///Flag2
		line(200,160,350,160);///Flag2
		line(200,165,350,165);///Flag2
		line(200,170,350,170);///Flag2
		line(200,175,350,175);///Flag2
		line(200,180,350,180);///Flag2
		line(200,185,350,185);///Flag2
		line(200,190,350,190);///Flag2
		line(200,195,350,195);///Flag2
		line(200,200,350,200);///Flag2
		line(350,80,350,200);///flag3
		line(200,80,200,200);///flag4
		setcolor(RED);
		circle(250,140,35);
		setfillstyle(SOLID_FILL,RED);
		floodfill(250,140,RED);
		delay(x);
	///1st person
		setcolor(BLUE);
		circle(500,350,25);///person1 of 1
		setcolor(GREEN);
		line(500,375,500,450);///person2 of 1
		setcolor(BLUE);
		line(500,450,530,545);///person3 of 1
		line(500,450,480,545);///person3 of 1
		setcolor(GREEN);
		line(450,380,500,420);///person3 of 1
		line(450,380,475,345);///person4 of 1
		line(470,340,475,340);///person5 of 1
		line(470,343,475,343);///person6 of 1
		line(485,340,495,340);///person7 of 1
		line(490,350,490,355);///person8 of 1
		arc(490,350,250,300,10);///person9 of 1

		///2nd person
		setcolor(WHITE);
		circle(600,350,25);///person1 of 2
		setcolor(GREEN);
		line(600,375,600,450);///person2 of 2
		setcolor(WHITE);
		line(600,450,630,545);///person3 of 2
		line(600,450,580,545);///person3 of 2
		setcolor(GREEN);
		line(550,380,600,420);///person3 of 2
		line(550,380,575,345);///person4 of 2
		line(570,340,575,340);///person5 of 2
		line(570,343,575,343);///person6 of 2
		line(585,340,595,340);///person7 of 2
		line(590,350,590,355);///person8 of 2
		arc(590,350,250,300,10);///person9 of 2

		///3rd person
		setcolor(YELLOW);
		circle(400,440,20);///person1 of 3
		setcolor(GREEN);
		line(400,465,400,500);///person2 of 3
		setcolor(YELLOW);
		line(400,500,430,545);///person3 of 3
		line(400,500,380,545);///person3 of 3
		setcolor(GREEN);
		line(360,450,400,490);///person3 of 3
		line(360,450,380,445);///person4 of 3

		line(370,430,375,430);///person5 of 2
		line(370,433,375,433);///person6 of 2
		line(385,430,395,430);///person7 of 2
		line(390,440,390,445);///person8 of 2
		arc(390,440,250,300,10);///person9 of 2


		///4nd person
		setcolor(RED);
		circle(700,350,25);///person1 of 2
		setcolor(GREEN);
		line(700,375,700,450);///person2 of 2
		setcolor(RED);
		line(700,450,730,545);///person3 of 2
		line(700,450,680,545);///person3 of 2
		setcolor(GREEN);
		line(650,380,700,420);///person3 of 2
		line(650,380,675,345);///person4 of 2
		line(670,340,675,340);///person5 of 2
		line(670,343,675,343);///person6 of 2
		line(685,340,695,340);///person7 of 2
		line(690,350,690,355);///person8 of 2
		arc(690,350,250,300,10);///person9 of 2
}
