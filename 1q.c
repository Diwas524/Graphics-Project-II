#include<graphics.h>
void border(int we)
{      int t=15;
	for (int i=0;i<=5;i++){
	line(0,400,630,400);  //up
	for (int z=0;z<=20;z++){
	line(t*z*2-10,375,t*z*2,375);
	 }
	line(0,350,630,350);  //down
if (we==0){
	line(580,400,580,340);
       line(580,340,450,400);     //low diagonal
	line(450,350,540,310);  //start
       line(450,350,450,400);  //tala sida
       line(580,340,540,310) ;  }   //mathi sida

     } 
//a,b,c,d are used for Translation
int a=200, b=-190;
int c=200, d=-190;

//x,y,m,n are used for Scaling.

float x=0.5, y=0.5;
float m=0.5, n=0.5;
//TREE 1 CROWN
setcolor(WHITE);
////setfillstyle(SOLID_FILL,GREEN);
line(240,420,275,420);
line(240,420,245,405);
line(275,420,270,405);
line(245,405,240,405);
line(270,405,275,405);
line(240,405,245,390);
line(275,405,270,390);
line(245,390,240,390);
line(270,390,275,390);
line(240,390,258,370);
line(275,390,257,370);
//floodfill(259,375,WHITE);

//TREE 1 TRUNK
setcolor(WHITE);
////setfillstyle(SOLID_FILL,BROWN);
line(250,460,250,420);
line(265,460,265,420);
line(250,460,265,460);
line(250,420,265,420);
//floodfill(255,441,WHITE);
line(88,400,163,400);
line(100,370,88,400);
line(100,370,112,400);
line(100,370,150,370);
line(150,370,163,400);
//floodfill(100,375,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,BROWN);
line(88,400,163,400);
line(100,370,112,400);
line(100,370,112,400);
line(100,370,150,370);
line(150,370,163,400);
//floodfill(105,375,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,5);
line(112,400,112,440);
line(88,440,112,440);
line(88,400,88,440);
line(112,440,163,440);
//floodfill(90,402,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,5);
line(163,400,163,440);
line(112,440,163,440);
line(112,400,112,440);
line(88,400,163,400);
//floodfill(115,405,WHITE);

//1ST HOUSE DOOR
setcolor(WHITE);
//setfillstyle(SOLID_FILL,RED);
line(94,440,94,420);
line(106,440,106,420);
line(94,420,106,420);
//floodfill(97,435,WHITE);

//================================= 2ND TREE ===============================//

/* THIS TREE IS TRANSLATION (TRANSFORMATION) OF 1ST TREE. */

//TREE 2 CROWN
setcolor(WHITE);
////setfillstyle(SOLID_FILL,GREEN);
line(240+c,420+d,275+c,420+d);
line(240+c,420+d,245+c,405+d);
line(275+c,420+d,270+c,405+d);
line(245+c,405+d,240+c,405+d);
line(270+c,405+d,275+c,405+d);
line(240+c,405+d,245+c,390+d);
line(275+c,405+d,270+c,390+d);
line(245+c,390+d,240+c,390+d);
line(270+c,390+d,275+c,390+d);
line(240+c,390+d,258+c,370+d);
line(275+c,390+d,257+c,370+d);
//floodfill(259+c,375+d,WHITE);

//TREE 2 TRUNK
setcolor(WHITE);
////setfillstyle(SOLID_FILL,BROWN);
line(250+c,460+d,250+c,420+d);
line(265+c,460+d,265+c,420+d);
line(250+c,460+d,265+c,460+d);
line(250+c,420+d,265+c,420+d);
//floodfill(255+c,441+d,WHITE);

//================================= 3RD TREE ===============================//

/* THIS TREE IS SCALING (TRANSFORMATION) OF 1ST TREE. */

//TREE 3 CROWN
setcolor(WHITE);
////setfillstyle(SOLID_FILL,GREEN);
line(240*m,420*n,275*m,420*n);
line(240*m,420*n,245*m,405*n);
line(275*m,420*n,270*m,405*n);
line(245*m,405*n,240*m,405*n);
line(270*m,405*n,275*m,405*n);
line(240*m,405*n,245*m,390*n);
line(275*m,405*n,270*m,390*n);
line(245*m,390*n,240*m,390*n);
line(270*m,390*n,275*m,390*n);
line(240*m,390*n,258*m,370*n);
line(275*m,390*n,257*m,370*n);
//floodfill(259*m,375*n,WHITE);

//TREE 3 TRUNK
setcolor(WHITE);
////setfillstyle(SOLID_FILL,BROWN);
line(250*m,460*n,250*m,420*n);
line(265*m,460*n,265*m,420*n);
line(250*m,460*n,265*m,460*n);
line(250*m,420*n,265*m,420*n);
//floodfill(255*m,441*n,WHITE);


//================================= 3 HOUSES ===============================//
//================================= 1ST HOUSE ==============================//

//================================= 2ND HOUSE ==============================//


//================================= 3RD HOUSE ==============================//

/* THIS HOUSE IS SCALING (TRANSFORMATION) OF 1ST TREE. */

//TRIANGLE OF HOUSE 3
setcolor(WHITE);
//setfillstyle(SOLID_FILL,LIGHTBLUE);
line(88*x,400*y,163*x,400*y);
line(100*x,370*y,88*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,150*x,370*y);
line(150*x,370*y,163*x,400*y);
//floodfill(100*x,375*y,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,LIGHTBLUE);
line(88*x,400*y,163*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,150*x,370*y);
line(150*x,370*y,163*x,400*y);
//floodfill(105*x,375*y,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,4);
line(112*x,400*y,112*x,440*y);
line(88*x,440*y,112*x,440*y);
line(88*x,400*y,88*x,440*y);
line(112*x,440*y,163*x,440*y);
//floodfill(90*x,402*y,WHITE);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,4);
line(163*x,400*y,163*x,440*y);
line(112*x,440*y,163*x,440*y);
line(112*x,400*y,112*x,440*y);
line(88*x,400*y,163*x,400*y);
//floodfill(115*x,405*y,WHITE);

//3RD HOUSE DOOR
setcolor(WHITE);
//setfillstyle(SOLID_FILL,YELLOW);
line(94*x,440*y,94*x,420*y);
line(106*x,440*y,106*x,420*y);
line(94*x,420*y,106*x,420*y);
//floodfill(97*x,435*y,WHITE);


//================================= MOUNTAIN ===============================//

//1ST TRIANGLE
setcolor(WHITE);  //BOUNDARY COLOR OF MOUNTAIN
//setfillstyle(SOLID_FILL,GREEN);      //ACTUAL COLOR OF MOUNTAIN
line(0,150,100,75);
line(100,75,200,150);

//2ND TRIANGLE
setcolor(WHITE);
//setfillstyle(SOLID_FILL,GREEN);
line(175,131,275,75);
line(275,75,375,150);

//3RD TRIANGLE
setcolor(WHITE);
//setfillstyle(SOLID_FILL,GREEN);
line(350,131,450,75);
line(450,75,550,150);

//4TH TRIANGLE
setcolor(WHITE);
//setfillstyle(SOLID_FILL,GREEN);
line(525,131,600,75);
line(600,75,750,180);

line(0,150,750,150);
//floodfill(100,136,WHITE);        //BOTTOM LINE OF MOUNTAIN
//floodfill(275,136,WHITE);        //2ND TRIANGLE
//floodfill(450,136,WHITE);        //3RD TRIANGLE
//floodfill(600,136,WHITE);        //4TH TRIANGLE

//================================= SUN ====================================//
setcolor(WHITE);
//setfillstyle(SOLID_FILL,YELLOW);

//floodfill(171,109,WHITE);
//setfillstyle(SOLID_FILL,BLUE);
//floodfill(50,50,WHITE);

//================================= CAR ====================================//

//ROAD
setcolor(WHITE);


 }
void cycle1()
 {      int c1=35,c2=130,l1=60,l2=80,l3=110,l4=130,p1=355,p2=25,p3=20,p4=315;
	for (int i=0;i<=20;i++)
       { cleardevice();
	border(0);
	circle(c1,p1,p2);  //left pangra
	circle(c1,p1,p3);
	circle(c2,p1,p2);       //right pangra
	circle(c2,p1,p3);
	//outer

	line(c1,p1,l1,p4);
	line(c1,p1,l2,p1);
	line(l1,p4,l2,p1);
	line(l1,p4,l3,p4);
	line(l2,p1,l3,p4);
	line(l4,p1,l3,p4) ;
	c1=c1+15;c2=c2+15;l1=l1+15;l2=l2+15;l3=l3+15;l4=l4+15;
	delay(70);
         }
	for (int i=0;i<=7;i++)
{
	   cleardevice();
	border(0);
	
        circle(c1+15*i,p1,p2);  //left pangra
	circle(c1+15*i,p1,p3);
	circle(c2+15*i,p1-9*i,p2);       //right pangra
	circle(c2+15*i,p1-9*i,p3);

          line(c1+15*i,p1,l1+15*(i-1),p4-2.5*i); //left diag
	   line(c1+15*i,p1,l2+15*i,p1-4*i); //left straight
	   line(l1+15*(i-1),p4-2.5*i,l2+15*i,p1-4*i); // two left meet
	line(l1+15*(i-1),p4-2.5*i,l3+15*(i-1),p4-7*i); //up straight
	  line(l2+15*i,p1-4*(i),l3+15*(i-1),p4-7*i);
	line(c2+15*i,p1-9*i,l3+15*(i-1),p4-7*i) ;
         delay(70);
}
        for (int i=8;i<=10;i++)
{
	   cleardevice();
	border(0);
	circle(c1+15*i,p1-9*(i-6.5),p2);  //left pangra
	circle(c1+15*i,p1-9*(i-6.5),p3);
	circle(c2+15*i,p1-9*i,p2);       //right pangra
	circle(c2+15*i,p1-9*i,p3); 
	//outer
       
          line(c1+15*i,p1-9*(i-6.5),l1+15*(i-1),p4-5*i); //left diag
	   line(c1+15*i,p1-9*(i-6.5),l2+15*i,p1-6*i); //left straight
	   line(l1+15*(i-1),p4-5*i,l2+15*i,p1-6*i); // two left meet
	line(l1+15*(i-1),p4-5*i,l3+15*(i-1),p4-9*i); //up straight
	  line(l2+15*i,p1-6*i,l3+15*(i-1),p4-9*i);
	line(c2+15*i,p1-9*i,l3+15*(i-1),p4-9*i); 
         delay(70);
}
   for ( int i=11;i<=19;i++)
{        
         
	   cleardevice();
	border(0);
	circle(c1+15*i,p1-9*(i-6.5)-15,p2);  //left pangra
	circle(c1+15*i,p1-9*(i-6.5)-15,p3);
	circle(c2+15*i,p1-9*i+15,p2);       //right pangra
	circle(c2+15*i,p1-9*i+15,p3); 
	//outer
       
          line(c1+15*i,p1-9*(i-6.5)-15,l1+15*(i-1),p4-5*i-15); //left diag
	   line(c1+15*i,p1-9*(i-6.5)-15,l2+15*i,p1-6*i-15); //left straight
	   line(l1+15*(i-1),p4-5*i-15,l2+15*i,p1-6*i-15); // two left meet
	line(l1+15*(i-1),p4-5*i-15,l3+15*(i-1),p4-9*i+15); //up straight
	  line(l2+15*i,p1-6*i-15,l3+15*(i-1),p4-9*i+15);
	line(c2+15*i,p1-9*i+15,l3+15*(i-1),p4-9*i+15); 
         delay(70);
} 
c1=35,c2=130,l1=60,l2=80,l3=110,l4=130,p1=355,p2=25,p3=20,p4=315;
for (int i=0;i<=20;i++)
       { 
          cleardevice();
	border(1);
circle(c1,p1,p2);  //left pangra
	circle(c1,p1,p3);
	circle(c2,p1,p2);       //right pangra
	circle(c2,p1,p3);
	//outer

	line(c1,p1,l1,p4);
	line(c1,p1,l2,p1);
	line(l1,p4,l2,p1);
	line(l1,p4,l3,p4);
	line(l2,p1,l3,p4);
	line(l4,p1,l3,p4) ;
	c1=c1+15;c2=c2+15;l1=l1+15;l2=l2+15;l3=l3+15;l4=l4+15;
	delay(70);
         }
}


int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");            //Write the Path of BGI Folder
cycle1();


getch();
closegraph();
return 0;
}
