#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include"dec.h"
#include"func.h"
FILE *fp;
int initmouse()     //for initialize mouse
{i.x.ax=0;
 int86(0X33,&i,&o);
 return o.x.ax;
}

void showmouseptr() //for showing mouse cursor
{i.x.ax=1;
 int86(0X33,&i,&o);
}

void getmousepos(int *button,int *x,int *y) //for getting mouse position
{i.x.ax=3;
 int86(0X33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
}

void startpage()
{int sp1,sp2;
settextstyle(TRIPLEX_FONT,0,5);
setcolor(CYAN);
outtextxy(150,10,"-----NITK-----");
setcolor(BLUE);
outtextxy(190,70,"PROJECT-ON-C");
outtextxy(230,130,"2018-2019");
setcolor(MAGENTA);
outtextxy(110,200,"ATTENDENCE SYSTEM");
settextstyle(SANS_SERIF_FONT,0,2);
setcolor(GREEN);
outtextxy(10,320,"submitted by- ");
setcolor(BROWN);
outtextxy(500,370,"submitted to- ");
outtextxy(470,390,"Mrs. Deepti Ma'm ");
setcolor(GREEN);
outtextxy(10,350,"Shubham Dubey (Head) ");
outtextxy(10,370,"Hitesh Bhawsar ");
outtextxy(10,390,"Tanu Pawar ");
outtextxy(10,410,"Avinabh Chambial");
outtextxy(10,430,"Shivam Kumar ");
outtextxy(10,450,"Mangal Prasad Hammad");
for(sp1=1;sp1<=2;sp1++)
{
 for(sp2=900;sp2>=500;sp2=sp2-50)
 {sound(sp2);
  delay(200);
  nosound();
 }
 delay(500);
 for(sp2=500;sp2<=900;sp2=sp2+50)
 {sound(sp2);
  delay(200);
  nosound();
 }
}
cleardevice();
}

void mainPaige()
{mp=1;
 setcolor(MAGENTA);
 rectangle(40,10,550,110);
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 fillpoly(RED,co);
 rectangle(600,0,625,20);
 setcolor(WHITE);
 line(607,5,617,18);
 line(617,6,607,18);
 settextstyle(SANS_SERIF_FONT,0,5);
 setcolor(MAGENTA);
 outtextxy(90,20,"ATTENDENCE SYSTEM");
 settextstyle(SANS_SERIF_FONT,0,3);
 setcolor(CYAN);
 outtextxy(260,120,"MENU");
 rectangle(100,150,500,400);
 rectangle(500,150,555,165);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,BLUE);
 floodfill(120,170,CYAN);
 floodfill(520,160,CYAN);
 setcolor(GREEN);
 rectangle(120,160,310,185);//1st box
 rectangle(120,205,400,230);//2nd box
 rectangle(120,250,400,275);//3rd box
 rectangle(120,295,400,320);//4rth box
 rectangle(120,340,310,365);//5th box
 settextstyle(DEFAULT_FONT,0,1);
 setcolor(BLACK);
 outtextxy(127,170,"Take Attendence");
 outtextxy(127,215,"Date wise student search");
 outtextxy(127,260,"Student's total attendence search");
 outtextxy(127,305,"Date wise class attendence");
 outtextxy(127,350,"Credits");
 outtextxy(507,155,"Logout");
 setcolor(RED);
 outtextxy(127,170,"T");
 outtextxy(127,215,"D");
 outtextxy(127,260,"S");
 outtextxy(127,305,"D");
 outtextxy(127,350,"C");
 outtextxy(507,155,"L");

}


void login()
{ cleardevice();
  lp=1;
  setfillstyle(SOLID_FILL,RED);
  setcolor(RED);
  fillpoly(RED,co);
  rectangle(600,0,625,20);
  setcolor(WHITE);
  line(607,5,617,18);
  line(617,6,607,18);
  settextstyle(SANS_SERIF_FONT,0,5);
  setcolor(MAGENTA);
  settextstyle(SANS_SERIF_FONT,0,5);
  outtextxy(90,10,"ATTENDENCE SYSTEM");
  rectangle(110,215,175,240); //refresh button
  setcolor(WHITE);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(116,223,"Refresh");
  setcolor(GREEN);
  rectangle(380,175,400,195);//show button
  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(387,170,"s");
  setcolor(CYAN);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  outtextxy(210,55,"LOGIN");
  settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
  printf("\n\n\n\n\n\n\n\n\n\t\tUsername\t");
  setcolor(WHITE);
  outtextxy(127,180,"Password");
  outtextxy(216,223,"Login");
  setcolor(MAGENTA);
  rectangle(100,100,400,250); //main box
  rectangle(230,140,380,160); //username input box
  rectangle(230,175,380,195); //password input box
  rectangle(200,215,280,240); //login button
  rectangle(100,100,400,250); //main box
  rectangle(230,175,380,195); //password input box
  rectangle(20,100,90,120);//dropdown;
  setcolor(LIGHTGRAY);
  outtextxy(25,108,droptext);
  line(77,109,83,109);//triangle
  line(77,109,80,113);//triangle
  line(83,109,80,113);//triangle
  line(80,109,80,113);//triangle fill
}

void dropdown()
{setcolor(MAGENTA);
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,124,90,144);  //1st option
 setcolor(WHITE);
 outtextxy(25,132,"MCA601");
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,148,90,168);  //2nd option
 setcolor(WHITE);
 outtextxy(25,156,"MCA603");
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,172,90,192);  //3rd option
 setcolor(WHITE);
 outtextxy(25,180,"MCA604");
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,196,90,216);  //4rth option
 setcolor(WHITE);
 outtextxy(25,206,"HU703");
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,220,90,240);  //5th option
 setcolor(WHITE);
 outtextxy(25,230,"MCA607");
 delay(100);
 setcolor(MAGENTA);
 rectangle(20,244,90,264);  //6th option
 setcolor(WHITE);
 outtextxy(25,254,"MCA608");
}
void input()
{int i1=0,c;
 char ch;
 for(c=0;c<20;c++)
   {p[c]=NULL;
   user[c]=NULL;
   }

  scanf("%s",user);
  printf("\n\t\tPassword\t");
  setcolor(MAGENTA);
  rectangle(100,100,400,250);
  rectangle(230,140,380,160);
  setcolor(WHITE);
  rectangle(230,175,380,195);

  while(1)
  {ch=getch();
   if(ch==10||ch==13)
    break;
   p[i1]=ch;
   printf("*");
   i1++;
  }

}


void error()
{ er=1;
  setcolor(WHITE);
  rectangle(380,100,600,300);
  setcolor(WHITE);
  floodfill(400,150,WHITE);
  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(400,130,"Invalid username");
  outtextxy(410,160,"or password,");
  outtextxy(400,190,"Enter again.");
  setcolor(LIGHTGRAY);
  rectangle(470,235,520,270);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(490,250,LIGHTGRAY);
  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(485,240,"OK");
}


 void takeattd()
 {int i,j;
 char k[2];

 setfillstyle(SOLID_FILL,BLACK);

 settextstyle(SANS_SERIF_FONT,0,5);
 setcolor(MAGENTA);
 outtextxy(140,0,"ATTENDENCE SYSTEM");
  settextstyle(TRIPLEX_FONT,0,3);
 setcolor(CYAN);
 outtextxy(280,50,"Take Attendence");

 setcolor(YELLOW);
 rectangle(595,90,625,105);
 rectangle(565,90,595,105);
 rectangle(100,110,625,455);
 setcolor(pc);
 settextstyle(DEFAULT_FONT,0,1);

 outtextxy(575,95,"P");
 setcolor(ac);
 outtextxy(605,95,"A");
k[0]=' ';
k[1]='1';
k[2]='\0';
for(j=0;j<280;j=j+40)
{for(i=0;i<500;i=i+40)
 {setcolor(YELLOW);
  rectangle(105+i,115+j,140+i,150+j);
  settextstyle(SANS_SERIF_FONT,0,1);
  setcolor(WHITE);
  outtextxy(115+i,120+j,k);
  if(k[0]==' ' && k[1]==57)
   {k[0]=49;
    k[1]=48;
   }
   else if(k[1]==57)
   {k[0]=k[0]+1;
   k[1]=48;
   }
   else
   k[1]=k[1]+1;
 }
}
outtextxy(115,400,"92");
setcolor(YELLOW);
rectangle(105,395,140,430);
 rectangle(570,420,620,450);
 rectangle(495,420,565,450);
 rectangle(440,420,490,450);
 setcolor(WHITE);
 outtextxy(445,420,"Back");
 outtextxy(575,420,"Done");
 outtextxy(500,420,"Refresh");
 }
void reset()
{int i;
  cleardevice();

       takeattd();
       setfillstyle(SOLID_FILL,RED);
       rectangle(600,0,625,20);
       floodfill(605,10,WHITE);
       setcolor(WHITE);
       line(607,5,617,18);
       line(617,6,607,18);
       for(i=0;i<92;i++)
       {pst[i]=NULL;
       }

}

void write()
{int atd,cnt=0,j,temp;
 fp=fopen(name,"w");
 cnt=0;
 if(color==2)
 {cnt=0;
  for(j=0;j<92;j++)
  {if(pst[j]!=0)
   {fprintf(fp,"%d ",pst[j]);
    cnt++;
   }
  }
  fprintf(fp,"present= %d",cnt);
  fclose(fp);
 }
 else if(color==4)
 {cnt=92;
  for(j=1;j<=92;j++)
  {temp=in(j);
   if(temp==0)
   {  fprintf(fp,"%d ",j);

   }
   else
   cnt--;
  }
  fprintf(fp,"present= %d",cnt);
  fclose(fp);
 }

}

void searchstu()
{int i1=0,j;
  setfillstyle(SOLID_FILL,RED);
  setcolor(RED);
  fillpoly(RED,co);
  rectangle(600,0,625,20);
  setcolor(WHITE);
  line(607,5,617,18);
  line(617,6,607,18);
   settextstyle(SANS_SERIF_FONT,0,3);
 setcolor(CYAN);
 outtextxy(170,60,"Search Student");

  settextstyle(SANS_SERIF_FONT,0,5);
  setcolor(MAGENTA);
  outtextxy(90,10,"ATTENDENCE SYSTEM");
  rectangle(50,100,500,240);//panel
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(55,110,MAGENTA);
  setcolor(MAGENTA);
  rectangle(50,100,500,450);//mainbox
  settextstyle(SANS_SERIF_FONT,0,2);
  setcolor(WHITE);
  outtextxy(80,125,"Roll No");
  outtextxy(270,125,"Date");
  setcolor(MAGENTA);
  rectangle(170,130,200,150);//roll no
  rectangle(210,130,240,150);//roll no

  line(189,138,195,138);//triangle
  line(189,138,192,142);//triangle
  line(195,138,192,142);//triangle
  line(229,138,235,138);//triangle
  line(229,138,232,142);//triangle
  line(235,138,232,142);//triangle


  i1=150;
  outtextxy(405,125,"-");
  rectangle(170+i1,130,200+i1,150); //date d
  rectangle(210+i1,130,240+i1,150); //date d
  rectangle(240,180,300,200);     //search button
  rectangle(250,210,300,230);    //back button
  settextstyle(DEFAULT_FONT,0,1);
  rectangle(430,130,470,150);// date mm
  setcolor(WHITE);
  outtextxy(247,187,"Search");
  outtextxy(257,217,"Back");
  outtextxy(437,137,ss5);//date mm
  outtextxy(327,137,ss3);//date d
  outtextxy(367,137,ss4);//date d
  outtextxy(177,137,ss1);//roll no
  outtextxy(217,137,ss2);//roll no

  line(189+i1,138,195+i1,138);//triangle
  line(189+i1,138,192+i1,142);//triangle
  line(195+i1,138,192+i1,142);//triangle
  line(229+i1,138,235+i1,138);//triangle
  line(229+i1,138,232+i1,142);//triangle
  line(235+i1,138,232+i1,142);//triangle

  line(458,138,464,138);//triangle
  line(458,138,461,142);//triangle
  line(464,138,461,142);//triangle

}

void ssdrop1()
{char n[2]={"0"};
 int is,js;
 n[0]=48;
 n[1]=NULL;
 settextstyle(DEFAULT_FONT,0,1);
 for(is=0,js=0;is<200;is=is+20,js=js+4)
  {
   delay(100);
    setcolor(MAGENTA);
    rectangle(170,155+is+js,200,175+is+js);
    setcolor(WHITE);
    outtextxy(177,162+is+js,n);
   n[0]=n[0]+1;

  }

}
void ssdrop2()
{char n[2]={"0\0"};
 int is,js;
  n[0]=48;
  n[1]=NULL;
  settextstyle(DEFAULT_FONT,0,1);
 for(is=0,js=0;is<200;is=is+20,js=js+4)
   {
    delay(100);
    setcolor(MAGENTA);
    rectangle(210,155+is+js,240,175+is+js);
    setcolor(WHITE);
    outtextxy(217,162+is+js,n);
    n[0]=n[0]+1;
   }

}

void ssdrop3()
{char n1[]={"0"};
 int is,js;
    settextstyle(DEFAULT_FONT,0,1);
   n1[0]=48;
   n1[1]=NULL;
   for(is=0,js=0;is<80;is=is+20,js=js+4)
  {
   delay(100);
   setcolor(MAGENTA);
   rectangle(170+150,155+is+js,200+150,175+is+js);
   setcolor(WHITE);
   outtextxy(327,162+is+js,n1);
   n1[0]=n1[0]+1;
  }

}
void ssdrop4()
{char n2[]={"0"};
 int is,js;
    settextstyle(DEFAULT_FONT,0,1);
  n2[0]=48;

  n2[1]=NULL;
  for(is=0,js=1;is<200;is=is+20,js=js+4)
  {
   delay(100);
   setcolor(MAGENTA);
   rectangle(210+150,155+is+js,240+150,175+is+js);
   setcolor(WHITE);
   outtextxy(367,162+is+js,n2);
   n2[0]=n2[0]+1;
  }

}
void ssdrop5()
{ char n[2]={"0\0"};
 int is,js;
   settextstyle(DEFAULT_FONT,0,1);
  for(is=0,js=1;is<240;is=is+20,js=js+4)
  {delay(100);
  n[0]=n[0]+1;
  if(n[0]==58)
  {n[0]=49;
  n[1]=48;
  n[2]=NULL;
  }
  if(n[0]==50 && n[1]==48 || n[1]==49)
  {n[0]=n[0]-1;
  n[1]=n[1]+1;
  }
  setcolor(MAGENTA);
  rectangle(430,150+js+is,470,170+is+js);
  setcolor(WHITE);
  outtextxy(437,157+is+js,n);
  }

}
void searchsturesult()
{ int t,i1,j;
  int roll1;
  char stu[30],nt,nt1[2],cpy[30];
  int nroll,ni=0,nj;
  roll1=atoi(roll);
  nroll=roll1;
  sname1[2]='-';
  sname1[5]=code[0];
  sname1[6]=code[1];
  sname1[7]=code[2];
  sname1[8]='.';sname1[9]='t';sname1[10]='x';sname1[11]='t';sname1[12]='\0';


  fp=fopen("hitesh.txt","r");
    nj=nroll;
    if(nroll<10)
    {
	while(1)
	{
	    fscanf(fp,"%c",&nt);
	    if(feof(fp))
	    break;
	   if(nt==nroll+48)
	    {
	      while(fgets(stu,sizeof(stu),fp))
	       {
		ni++;
		if(ni==2)
		 {  printf("%d",nroll);
		  strcpy(cpy,stu);
		  break;
		 }
		}
	     }
	 }

    }

    if(nroll>9)
    {
      while(1)
      {
	nroll=nj;
	fscanf(fp,"%c%c",&nt1[0],&nt1[1]);
	if(feof(fp))
	break;
	if(nt1[1]==nroll%10+48)
	{
	 nroll=nroll/10;
	  if(nt1[0]==nroll+48)
	  {
	    while(fgets(stu,sizeof(stu),fp))
	    {
	      ni++;
	      if(ni==2)
	      {
		strcpy(cpy,stu);
	       break;
	       }
	    }

	   }
	}
	fseek(fp,-1,1);
    }
    }
    fclose(fp);





  fp=fopen(sname1,"r");
  if(fp==NULL)
    {setcolor(BROWN);
     settextstyle(SANS_SERIF_FONT,0,2);
     outtextxy(130,250,"No Record Found.");
    }
  else
  {j=0;
   i1=0;
   while(j++<200)
   {fscanf(fp,"%d",&t);
    if(feof(fp))
     break;
    if(t==roll1)
    {setcolor(GREEN);
     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(180,270,cpy);
     outtextxy(230,320,"Present");
     i1++;
     break;
    }
   }
  if(i1==0)
  {setcolor(RED);
   settextstyle(SANS_SERIF_FONT,0,2);
   outtextxy(230,320,"absent");
   outtextxy(180,270,cpy);
  }

}

 fclose(fp);




}

 void searchtotalstu()
 {
  setfillstyle(SOLID_FILL,RED);
  setcolor(RED);
  fillpoly(RED,co);
  rectangle(600,0,625,20);
  setcolor(WHITE);
  line(607,5,617,18);
  line(617,6,607,18);
   settextstyle(SANS_SERIF_FONT,0,3);
 setcolor(CYAN);
 outtextxy(130,60,"Student's Total Attendence Search");

  settextstyle(SANS_SERIF_FONT,0,5);
  setcolor(MAGENTA);
  outtextxy(90,10,"ATTENDENCE SYSTEM");
  rectangle(50,100,500,240);//panel
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(55,110,MAGENTA);
  setcolor(MAGENTA);
  rectangle(50,100,500,450);//mainbox
  settextstyle(SANS_SERIF_FONT,0,2);
  setcolor(WHITE);
  outtextxy(80,125,"Roll No");
  outtextxy(285,125,"Semester");
  setcolor(MAGENTA);
  rectangle(170,130,200,150);//roll no
  rectangle(210,130,240,150);//roll no
  settextstyle(DEFAULT_FONT,0,1);
  line(189,138,195,138);//triangle
  line(189,138,192,142);//triangle
  line(195,138,192,142);//triangle
  line(229,138,235,138);//triangle
  line(229,138,232,142);//triangle
  line(235,138,232,142);//triangle
  rectangle(240,180,300,200);     //search button
  rectangle(250,210,300,230);    //back button
  settextstyle(DEFAULT_FONT,0,1);
  rectangle(410,130,470,150);// date semester
  setcolor(WHITE);
  outtextxy(247,187,"Search");
  outtextxy(257,217,"Back");
  outtextxy(417,137,sts3);//date mm
  outtextxy(177,137,sts1);//roll no
  outtextxy(217,137,sts2);//roll no

  line(458,138,464,138);//triangle
  line(458,138,461,142);//triangle
  line(464,138,461,142);//triangle

 }

void searchtotalprint()
{

  char t,t1[2],name1[12],ch[2],totalclass[]={"00"},percent[]={"00.00 %"},presentcount[]={"00"};
 int i=0,rollstsi,j,day,mnt,i1,j1,per;
 float f,tc=0;
 static float cnt1=0;
 name1[0]=48;
 name1[1]=49;
 name1[2]='-';
 name1[3]=48;
 name1[4]=49;
 name1[5]=code[0];
 name1[6]=code[1];
 name1[7]=code[2];
 name1[8]='.';
 name1[9]='t';
 name1[10]='x';
 name1[11]='t';
 name1[12]='\0';
 day=(name1[0]-48)*10+(name1[1]-48);
 mnt=(name1[3]-48)*10+(name1[4]-48);
 for (i1=0; i1<strlen(sem); i1++)
 {
   sem[i1] = toupper(sem[i1]);
 }
    if(strcmp(sem,"ODD")==0)
   name1[4]='7';
 rollstsi=atoi(rollsts);
 j1=rollstsi;
 day=(name1[0]-48)*10+(name1[1]-48);
 mnt=(name1[3]-48)*10+(name1[4]-48);
   while(mnt<=crmnt)
  {
     name1[12]=NULL;
     fp=fopen(name1,"r");
     if(fp!=NULL)
     {
      tc++;
      i=0;
      if(rollstsi<10)
       {//3
	while(1)
	{//4
	 fscanf(fp,"%c",&t);
	 if(feof(fp))
	  break;
	 if(t==rollstsi+48)
	 {//5
	  cnt1++;
	  i++;
	  break;
	 }//4
	}//3
	if(i==0)
	{}
       }//end if
	else if(rollstsi>=10)
	{//4
	 while(1)
	 {//5
	  rollstsi=j1;
	  fscanf(fp,"%c%c",&t1[0],&t1[1]);
	  if(feof(fp))
	   break;
	  if(t1[1]==rollstsi%10+48)
	   {//6
	    rollstsi/=10;
	    if(t1[0]==rollstsi+48)
	    {//7
	     cnt1++;
	     i++;
	     break;
	    }//6
	   }//5
	   fseek(fp,-1,1);
	 }//4
	 if(i==0)
	 {}
	}// end else if

     }//end if null

   fclose(fp);

   if(day==crdate && mnt==crmnt)
   break;
   else if(name1[4]==50 &&name1[3]==48 && leap())//leap year date change feb
    {//3
    if(name1[0]<=49 && name1[1]==57)
       { name1[0]=name1[0]+1;
	 name1[1]=48;
       }
      else if(name1[0]==50 &&name1[1]==57)
      {name1[0]=48;
       name1[1]=49;
       name1[4]=name1[4]+1;
      }
    else
    name1[1]=name1[1]+1;
    }//2
    else if(name1[4]==50 && name1[3]==48  && !leap()) //non leap year date change feb
   {//3
   if(name1[0]<=49 && name1[1]==57)
     {name1[0]=name1[0]+1;
      name1[1]=48;
     }
     else if(name1[0]==50 && name1[1]==56)
     {name1[0]=48;
      name1[1]=49;
      name1[4]=name1[4]+1;
     }
    else
    name1[1]=name1[1]+1;
    }//2
    else if(name1[4]==49||name1[4]==51||name1[4]==53||name1[4]==55||name1[4]==56||(name1[4]==48&&name1[3]==49) || (name1[4]==50 && name1[3]==49)) //31 days month
    { //3
    if(name1[0]<51 && name1[1]==57)
     {name1[0]=name1[0]+1;
      name1[1]=48;
     }
     else if(name1[0]==51 && name1[1]==49)
     {
     name1[0]=48;
      name1[1]=49;
      name1[4]=name1[4]+1;
     }
     else
     name1[1]=name1[1]+1;
    }    //2
     else //30 day month
     {//3
     if(name1[4]==57 && name1[0]==51)
      {name1[3]=49;
      name1[4]=48;
      name1[0]=48;
      name1[1]=49;
      }
     else if(name1[0]<51 && name1[1]==57)
      {name1[0]=name1[0]+1;
       name1[1]=48;
      }
      else if(name1[0]==51 && name1[1]==48)
      {
       name1[0]=48;
       name1[1]=49;
       name1[4]=name1[4]+1;
      }
      else
      name1[1]=name1[1]+1;
      }  //2
  day=(name1[0]-48)*10+(name1[1]-48);
  mnt=(name1[3]-48)*10+(name1[4]-48);

   } //while

 totalclass[1]=((int)tc%10)+48;
 tc=tc/10;
 totalclass[0]=tc+48;
 settextstyle(SANS_SERIF_FONT,0,3);
 setcolor(BROWN);
 outtextxy(100,250,"Total no. of classes-");
 outtextxy(350,250,totalclass);
 if(cnt1==0)
 outtextxy(150,280,"No attendence yet");
 else
 {outtextxy(100,280,"Attendence till now-");
  presentcount[1]=((int)cnt1%10)+48;
  cnt1=cnt1/10;
  presentcount[0]=cnt1+48;
  outtextxy(350,280,presentcount);
 }
 f=(cnt1*100)/tc;
 per=f*100;
 percent[5]=' ';
 percent[6]='%';
 percent[4]=per%10+48;
 per=per/10;
 percent[3]=per%10+48;
 per=per/10;
 percent[2]='.';
 percent[1]=per%10+48;
 per=per/10;
 percent[0]=per+48;
 outtextxy(130,310,"Percentage- ");
 outtextxy(280,310,percent);
 cnt1=0;
 fclose(fp);

}

void totalclassatd()
{int i1;
setfillstyle(SOLID_FILL,RED);
  setcolor(RED);
  rectangle(600,0,625,20);
  floodfill(605,10,RED);
  setcolor(WHITE);
  line(607,5,617,18);
  line(617,6,607,18);
  settextstyle(SANS_SERIF_FONT,0,3);
  setcolor(CYAN);
  outtextxy(130,60,"Search Attendence of Class");

  settextstyle(SANS_SERIF_FONT,0,5);
  setcolor(MAGENTA);
  outtextxy(90,10,"ATTENDENCE SYSTEM");
  rectangle(50,100,500,240);//panel
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(55,110,MAGENTA);
  setcolor(MAGENTA);
  rectangle(50,100,500,450);//mainbox
  settextstyle(SANS_SERIF_FONT,0,2);
  setcolor(WHITE);

  i1=150;
  outtextxy(405,125,"-");
  rectangle(170+i1,130,200+i1,150); //date d
  rectangle(210+i1,130,240+i1,150); //date d
  rectangle(240,180,300,200);     //search button
  rectangle(250,210,300,230);    //back button
  settextstyle(DEFAULT_FONT,0,1);
  rectangle(430,130,470,150);// date mm
  setcolor(WHITE);
  outtextxy(247,187,"Search");
  outtextxy(257,217,"Back");
  outtextxy(437,137,tcam);//date mm
  outtextxy(327,137,tcad);//date d
  outtextxy(367,137,tcad1);//date d
   line(189+i1,138,195+i1,138);//triangle
  line(189+i1,138,192+i1,142);//triangle
  line(195+i1,138,192+i1,142);//triangle
  line(229+i1,138,235+i1,138);//triangle
  line(229+i1,138,232+i1,142);//triangle
  line(235+i1,138,232+i1,142);//triangle

  line(458,138,464,138);//triangle
  line(458,138,461,142);//triangle
  line(464,138,461,142);//triangle
  settextstyle(SANS_SERIF_FONT,0,2);
  outtextxy(150,125,"Select Date  ");

}


void totalclassprint()
{ int take;
char totalcount[]={"00"};
rolltca[2]='-';
rolltca[5]=code[0];
rolltca[6]=code[1];
rolltca[7]=code[2];
rolltca[8]='.';
rolltca[9]='t';
rolltca[10]='x';
rolltca[11]='t';
rolltca[12]='\0';
fp=fopen(rolltca,"r");
if(fp==NULL)
{settextstyle(SANS_SERIF_FONT,0,3);
 setcolor(BROWN);
 outtextxy(100,280,"No Attendence record found");
 outtextxy(200,310," for this date.");
}
else
{
fseek(fp,-2,2);
fscanf(fp,"%d",&take);
if(take<10)
totalcount[1]=take+48;
else
{totalcount[1]=take%10+48;
 take=take/10;
 totalcount[0]=take+48;
}
settextstyle(SANS_SERIF_FONT,0,3);
setcolor(BROWN);
outtextxy(170,280,"Present - ");
setcolor(GREEN);
outtextxy(300,280,totalcount);
}
fclose(fp);

}



void droperror()
{
 setcolor(RED);
      rectangle(20,100,90,120);
     outtextxy(25,108,droptext);
     line(77,109,83,109);//triangle
     line(77,109,80,113);//triangle
     line(83,109,80,113);//triangle
     line(80,109,80,113);//triangle fill
      delay(2000);
      setcolor(LIGHTGRAY);
      rectangle(20,100,90,120);
     outtextxy(25,108,droptext);
     line(77,109,83,109);//triangle
     line(77,109,80,113);//triangle
     line(83,109,80,113);//triangle
     line(80,109,80,113);//triangle fill

}


void mouseOnHover(int x,int y)
{
 if (x>=230 && y>=140 && x<=380 && y<=160 && lp==1)//textbox onhover highlight
      {setcolor(WHITE);
       rectangle(230,140,380,160);
      }
     else  if(lp==1)
     {setcolor(MAGENTA);
      rectangle(230,140,380,160);
     }
     if(x>=380 && x<=400 && y>=175 && y<=195 && lp==1) //show button on hover
     {setcolor(LIGHTGREEN);
      rectangle(380,175,400,195);
      settextstyle(TRIPLEX_FONT,0,2);
      outtextxy(387,170,"s");
     }
     else  if(lp==1)
     {setcolor(GREEN);
      settextstyle(TRIPLEX_FONT,0,2);
      outtextxy(387,170,"s");
     }
     if(x>=110 && x<=175 && y>=215 && y<=240 && lp==1)
     {setcolor(CYAN);
      rectangle(110,215,175,240);
      settextstyle(DEFAULT_FONT,0,1);
      outtextxy(116,223,"Refresh"); //refresh button onhover
     }
     else if(lp ==1)
     {setcolor(MAGENTA);
      rectangle(110,215,175,240); //refresh button after hover
      setcolor(WHITE);
      settextstyle(DEFAULT_FONT,0,1);
      outtextxy(116,223,"Refresh");
     }
     if(x>=440 && y>=420 && x<=490 && y<=450 && ta==1)// back button on hover
     {  setcolor(BLUE);
	rectangle(440,420,490,450);
	outtextxy(445,420,"Back");

     }
     else if(ta==1) //back button after hover
     {   setcolor(YELLOW);
	rectangle(440,420,490,450);
	setcolor(WHITE);
	outtextxy(445,420,"Back");

     }


     if(x>=200 && x<=280 &&y>=215 &&y<=240 && lp==1) //login button on hover
     {  setcolor(CYAN);
      settextstyle(DEFAULT_FONT,0,1);
	rectangle(200,215,280,240);
     outtextxy(216,223,"Login");

     }
     else if(lp==1)  //login button after hover
     { setcolor(MAGENTA);
     rectangle(200,215,280,240);
     setcolor(WHITE);
      settextstyle(DEFAULT_FONT,0,1);

     outtextxy(216,223,"Login");
     }
     if(x>=20 && y>=100 && x<=90 && y<=120 && lp==1)//dropdown on hover
    {setcolor(WHITE);
     rectangle(20,100,90,120);
     outtextxy(25,108,droptext);
     line(77,109,83,109);//triangle
     line(77,109,80,113);//triangle
     line(83,109,80,113);//triangle
     line(80,109,80,113);//triangle fill
    }
    else if(lp==1)
    {setcolor(LIGHTGRAY);
     rectangle(20,100,90,120);
     outtextxy(25,108,droptext);
     line(77,109,83,109);//triangle
     line(77,109,80,113);//triangle
     line(83,109,80,113);//triangle
     line(80,109,80,113);//triangle fill
    }
       if(x>=570 && y>=420 && x<=620 && y<=450 && ta==1)//takeattd done on hover
    {setcolor(CYAN);
     settextstyle(SANS_SERIF_FONT,0,1);
     outtextxy(575,420,"Done");
      rectangle(570,420,620,450);
    }
    else if(ta==1) //take attd done after hover
    {setcolor(WHITE);
     settextstyle(SANS_SERIF_FONT,0,1);
     outtextxy(575,420,"Done");
      setcolor(YELLOW);
      rectangle(570,420,620,450);

    }
   if(x>=495 && y>=420 && x<=565 && y<=450 && ta==1)//take attd refresh on hover
    {setcolor(CYAN);
     settextstyle(SANS_SERIF_FONT,0,1);
     outtextxy(500,420,"Refresh");
     rectangle(495,420,565,450);
    }
    else if(ta==1) //take attd refresh after hover
    {setcolor(WHITE);
     settextstyle(SANS_SERIF_FONT,0,1);
     outtextxy(500,420,"Refresh");
     setcolor(YELLOW);
     rectangle(495,420,565,450);
    }

  if(x>=120 && y>=160&& x<=310 && y<=185 && mp==1)//1st box on hover
    {
    setcolor(BROWN);
    rectangle(120,160,310,185);
    }
   else if(mp==1)
   {
   setcolor(GREEN);
   rectangle(120,160,310,185);
   }

 if(x>=120 && y>=205 && x<=400 && y<=230 && mp==1)//2nd box
   {
   setcolor(BROWN);
   rectangle(120,205,400,230);
   }
   else if(mp==1)
   {
   setcolor(GREEN);
   rectangle(120,205,400,230);
   }
 if(x>=120 && y>=250 && x<=400 && y<=275 && mp==1)//3rd box
 {
 setcolor(BROWN);
 rectangle(120,250,400,275);
 }
 else if(mp==1)
 {
 setcolor(GREEN);
 rectangle(120,250,400,275);
 }
 if(x>=120 && y>=295 && x<=400 && y<=320 && mp==1)//4rth box
 {
 setcolor(BROWN);
 rectangle(120,295,400,320);
}
else if(mp==1)
{
setcolor(GREEN);
rectangle(120,295,400,320);
 }
if(x>=120 && y>=340 && x<=310 && y<=365 && mp==1)
{
setcolor(BROWN);
rectangle(120,340,310,365);
}
else if(mp==1)
{
setcolor(GREEN);
rectangle(120,340,310,365);
}
}

void credits()
{int rest=400,my1=650,my2=600;
setcolor(MAGENTA);
rectangle(40,10,550,110);
setfillstyle(SOLID_FILL,RED);
setcolor(RED);
rectangle(600,0,625,20);
floodfill(605,10,RED);
setcolor(WHITE);
line(607,5,617,18);
line(617,6,607,18);
settextstyle(SANS_SERIF_FONT,0,5);
setcolor(MAGENTA);
outtextxy(90,20,"ATTENDENCE SYSTEM");
settextstyle(SANS_SERIF_FONT,0,3);
setcolor(CYAN);
outtextxy(260,120,"Credits");
setcolor(BLUE);
settextstyle(SANS_SERIF_FONT,0,3);
delay(350);
setcolor(RED);
sound(my1);
outtextxy(127,170,"S");
delay(250);
nosound();
delay(100);
setcolor(BLUE);
sound(my2);
outtextxy(141,170,"h");
delay(200);
nosound();
delay(100);
sound(my1);
outtextxy(155,170,"u");
delay(200);
nosound();
delay(100);
sound(my2);

outtextxy(169,170,"b");
delay(200);
nosound();
delay(100);
sound(my1);

outtextxy(183,170,"h");
delay(200);
nosound();
delay(100);
sound(my2);

outtextxy(197,170,"a");
delay(200);
nosound();
delay(100);
sound(my1);

outtextxy(211,170,"m");
delay(200);
nosound();
delay(100);
sound(my2);

setcolor(RED);
outtextxy(251,170,"D");
delay(200);
nosound();
delay(180);
sound(my1);

setcolor(BLUE);
outtextxy(265,170,"u");
delay(200);
nosound();
delay(100);
sound(my2);

outtextxy(279,170,"b");
delay(200);
nosound();
delay(100);
sound(my1);

outtextxy(293,170,"e");
delay(200);
nosound();
delay(100);
sound(my2);

outtextxy(307,170,"y");
delay(200);
nosound();
delay(100);
sound(my1);

outtextxy(335,170,"(HEAD)");
delay(250);
setcolor(BLUE);
nosound();
delay(100);
sound(rest);

outtextxy(127,215,"Hitesh Bhawsar");
setcolor(RED);
outtextxy(127,215,"H");
outtextxy(204,215,"B");
delay(200);
nosound();
delay(350);
setcolor(BLUE);
nosound();
sound(rest);

outtextxy(127,260,"Tanu Pawar");
setcolor(RED);
outtextxy(127,260,"T");
outtextxy(189,260,"P");
delay(100);
nosound();
delay(250);
setcolor(BLUE);
sound(rest);

outtextxy(127,305,"Mangal Prasad");
setcolor(RED);
outtextxy(127,305,"M");
outtextxy(209,305,"P");
delay(100);
nosound();
delay(250);
setcolor(BLUE);
nosound();
delay(100);
sound(rest);

outtextxy(127,350,"Avinabh Chambial (CR)");
setcolor(RED);
outtextxy(127,350,"A");
outtextxy(222,350,"C");
delay(100);
nosound();
delay(250);
setcolor(BLUE);
nosound();
delay(100);
sound(rest);
outtextxy(127,395,"Shivam Kumar");
setcolor(RED);
outtextxy(127,395,"S");
outtextxy(217,395,"K");
delay(100);
nosound();
delay(350);
}

void main()
{int status,gd=DETECT,gm,button,x,y,tempx,tempy;
 struct date d;
 int date,m,atd,choice,ex,toggle=0,tg1=0,stg=0,stg1=0,stg2=0,cnt;
 char array[50],k[2];
 static int sp=0;
 start:

 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 getdate(&d);
crdate=d.da_day;
crmnt=d.da_mon;
year=d.da_year;
if(sp==0)
{startpage();
 sp=1;
}
if(d.da_day<10)
 {name[0]=48;
  name[1]=d.da_day+48;
 }
else
 {date=d.da_day;
 name[1]=date%10+48;
 date/=10;
 name[0]=date+48;
 }
 name[2]='-';
 if(d.da_mon<10)
 {name[3]=48;
 name[4]=d.da_mon+48;
 }
 else
 {m=d.da_mon;
 name[4]=m%10+48;
 m/=10;
 name[3]=m+48;
 }
 name[5]=code[0];
 name[7]=code[2];
 name[6]=code[1];
 name[8]='.';
 name[9]='t';
 name[10]='x';
 name[11]='t';
 name[12]='\0';


 status=initmouse();

 if(status==0)
  printf("mouse support not available\n");
 else
  {showmouseptr();
   getmousepos(&button,&x,&y);
   login();
   lp=1;
   while(1)
    {getmousepos(&button,&x,&y);
     mouseOnHover(x,y);

  /* Mouse on click Listener */
     if(button==1)
     {  delay(50);
       if(x>=600 && x<=625 && y>=0 && y<=25)//close button
	{sound(100);
	  delay(50);
	  nosound();
	 goto last;
	}
       if(x>=120 && y>=340 && x<=310 && y<=365 && mp==1)
       {sound(2000);
	  delay(50);
	  nosound();
	mp=0;
	cleardevice();
	credits();
       }

       if(x>=500 && y>=150 && x<=555 && y<=165 && mp==1) //logout button
       {sound(2000);
	  delay(50);
	  nosound();
	mp=0;
	cleardevice();
	setbkcolor(BLACK);
	closegraph();
	for(cnt=0;cnt<20;cnt++)
	{user[cnt]=NULL;
	 p[cnt]=NULL;
	}
	goto start;
       }
      if(x>=200 && x<=280 &&y>=215 &&y<=240 && lp==1 && flag==1)//login button
       {  sound(2000);
	  delay(50);
	  nosound();
	if(strcmp(user,"admin")==0 && strcmp(p,"password")==0)
	{cleardevice();
	 lp=0;
	 mainPaige();

	}
	else
	{sound(50);
	  delay(100);
	  nosound();
	 lp=1;
	 error();}
      }
      else if(x>=200 && x<=280 &&y>=215 &&y<=240 && lp==1)
      { sound(150);
	  delay(50);
	  nosound();
	sound(150);
	  delay(50);
	  nosound();
       droperror();
      }
     if(x>=110 && x<=170 && y>=215 && y<=240 && lp==1)//refresh button
     { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      goto start;
     }
     if(x>=470 && y>=235 && x<=520 && y<=270 && lp==1 && er==1)//error ok button
     { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      goto start;
     }
     if(x>=380 && x<=400 && y>=175 && y<=195 && lp==1) //show button
     {sound(2000);
	  delay(50);
	  nosound();
      setcolor(WHITE);
      settextstyle(DEFAULT_FONT,0,1);
      outtextxy(300,205,p);
     }
     if (x>=230 && y>=140 && x<=380 && y<=160 && lp==1)//textbox highlight
     {sound(2000);
	  delay(50);
	  nosound();
      setcolor(WHITE);
      rectangle(230,140,380,160);
      input();
     }

     if(x>=440 && y>=420 && x<=490 && y<=450 && ta==1)
     {sound(2000);
	  delay(50);
	  nosound();
      mp=1;
      ta=0;
      cleardevice();
      mainPaige();
     }
     if(x>=20 && y>=100 && x<=90 && y<=120 && lp==1)//dropdown
     {sound(2000);
	  delay(50);
	  nosound();
      if(toggle==1)
      {toggle=0;
       cleardevice();
       goto start;
      }
      else if(toggle==0)
      {toggle=1;
      dropdown();
      }
     }
     if(x>=20 && y>=124 && x<=90 && y<=144 && lp==1 && toggle==1)//dropdown 1st option
     {sound(2000);
	  delay(50);
	  nosound();
      flag=1;
      code[0]='6';code[1]='0';code[2]='1';
      toggle=0;
      cleardevice();
      strcpy(droptext,"MCA601");
      goto start;
     }
	 if(x>=20 && y>=148 && x<=90 && y<=168 && lp==1 && toggle==1)//dropdown 1st option
     {sound(2000);
	  delay(50);
	  nosound();
      flag=1;
      code[0]='6';code[1]='0';code[2]='3';
      toggle=0;
      cleardevice();
      strcpy(droptext,"MCA603");
      goto start;
     }
	if(x>=20 && y>=172 && x<=90 && y<=192 && lp==1 && toggle==1)//dropdown 1st option
     {sound(2000);
	  delay(50);
	  nosound();
      flag=1;
      code[0]='6';code[1]='0';code[2]='4';
      toggle=0;
      cleardevice();
      strcpy(droptext,"MCA604");
      goto start;
     }
       if(x>=20 && y>=196 && x<=90 && y<=216 && lp==1 && toggle==1)//dropdown 1st option
     {sound(2000);
	  delay(50);
	  nosound();
     flag=1;
      code[0]='7';code[1]='0';code[2]='3';
      toggle=0;
      cleardevice();
      strcpy(droptext,"HU 703");
      goto start;
     }
      if(x>=20 && y>=220 && x<=90 && y<=240 && lp==1 && toggle==1)//dropdown 1st option
     { sound(2000);
	  delay(50);
	  nosound(); flag=1;
      code[0]='6';code[1]='0';code[2]='7';
      toggle=0;
      cleardevice();
      strcpy(droptext,"MCA607");
      goto start;
     }
      if(x>=20 && y>=244 && x<=90 && y<=264 && lp==1 && toggle==1)//dropdown 1st option
     {sound(2000);
	  delay(50);
	  nosound();
      flag=1;
      code[0]='6';code[1]='0';code[2]='8';
      toggle=0;
      cleardevice();
      strcpy(droptext,"MCA608");
      goto start;
     }
     if(x>=120 && y>=160 && x<=310 && y<=185 && mp==1)//take attendence
     {sound(2000);
	  delay(50);
	  nosound();
     ta=1;
     mp=0;
     cleardevice();
     takeattd();
     }
     if(x>=120 && y>=205 && x<=400 && y<=230 && mp==1) // search student
     {sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      ss=1;
      mp=0;
      searchstu();
     }


     else  if(x>=170 && y>=130 && x<=200 && y<=150 && ss==1  && tg1==0)
     {sound(2000);
	  delay(50);
	  nosound();
      tg1=1;

      ssdrop1();
      }
       else	if(x>=170 && y>=155 && x<=200 && y<=175 && ss==1 &&  tg1==1)
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='0';
       ss1[0]='0'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=170 && y>=179 && x<=200 && y<=199 && ss==1 &&  tg1==1 )
      {sound(2000);
	  delay(50);
	  nosound();
      tg1=0;
       roll[0]='1';
       ss1[0]='1'; ss1[2]=NULL;
       cleardevice();
       searchstu();

      }
      else  if(x>=170 && y>=203 && x<=200 && y<=223 && ss==1 &&  tg1==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='2';
       ss1[0]='2'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();

      }
      else  if(x>=170 && y>=227 && x<=200 && y<=247 && ss==1 && tg1==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='3';
       ss1[0]='3'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();

      }

      else  if(x>=170 && y>=251 && x<=200 && y<=271 && ss==1  &&  tg1==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='4';
       ss1[0]='4'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();

      }
      else  if(x>=170 && y>=275 && x<=200 && y<=295 && ss==1 &&  tg1==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='5';
       ss1[0]='5'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=170 && y>=299 && x<=200 && y<=319 && ss==1 &&  tg1==1)
      {sound(2000);
	  delay(50);
	  nosound();
       roll[0]='6';
       ss1[0]='6'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();

      }
      else  if(x>=170 && y>=323 && x<=200 && y<=343 && ss==1 &&  tg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[0]='7';
       ss1[0]='7'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=170 && y>=347 && x<=200 && y<=367 && ss==1 && tg1==1 )
      { sound(2000);
	  delay(50);
	  nosound();
      roll[0]='8';
       ss1[0]='8'; ss1[2]=NULL;
       tg1=0;
       cleardevice();
       searchstu();

      }
      else  if(x>=170 && y>=371 && x<=200 && y<=391 && ss==1 &&  tg1==1 )
      { sound(2000);
	  delay(50);
	  nosound();
      roll[0]='9';
      ss1[0]='9'; ss1[2]=NULL;
      tg1=0;
       cleardevice();
       searchstu();

      }
      else if(tg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       cleardevice();

	tg1=0;
	searchstu();
      }

	  if(x>=170 && y>=130 && x<=200 && y<=150 && sts==1 && stg==0  )
     {  sound(2000);
	  delay(50);
	  nosound();
      stg=1;
      ssdrop1();
      }

       else if(x>=170 && y>=155 && x<=200 && y<=175 && sts==1 &&  stg==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='0';
       sts1[0]='0';
       stg=0;
       cleardevice();
       searchtotalstu();
      }

      else  if(x>=170 && y>=179 && x<=200 && y<=199 && sts==1 &&  stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
      stg=0;
       rollsts[0]='1';
       sts1[0]='1';
       cleardevice();
       searchtotalstu();

      }
      else  if(x>=170 && y>=203 && x<=200 && y<=223 && sts==1 &&  stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='2';
       sts1[0]='2';
       stg=0;
       cleardevice();
       searchtotalstu();

      }
      else  if(x>=170 && y>=227 && x<=200 && y<=247 && sts==1 && stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='3';
       sts1[0]='3';
       stg=0;
       cleardevice();
       searchtotalstu();

      }

      else  if(x>=170 && y>=251 && x<=200 && y<=271 && sts==1  &&  stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='4';
       sts1[0]='4';
       stg=0;
       cleardevice();
       searchtotalstu();

      }
      else  if(x>=170 && y>=275 && x<=200 && y<=295 && sts==1 &&  stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='5';
       sts1[0]='5';
       stg=0;
       cleardevice();
       searchtotalstu();
      }
      else  if(x>=170 && y>=299 && x<=200 && y<=319 && sts==1 && stg==1)
      {sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='6';
       sts1[0]='6';
       stg=0;
       cleardevice();
       searchtotalstu();

      }
      else  if(x>=170 && y>=323 && x<=200 && y<=343 && sts==1 &&  stg==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[0]='7';
       sts1[0]='7';
       stg=0;
       cleardevice();
       searchtotalstu();
      }
      else  if(x>=170 && y>=347 && x<=200 && y<=367 && sts==1 && stg==1 )
      { sound(2000);
	  delay(50);
	  nosound();
      rollsts[0]='8';
       sts1[0]='8';
       stg=0;
       cleardevice();
       searchtotalstu();

      }
      else  if(x>=170 && y>=371 && x<=200 && y<=391 && sts==1 &&  stg==1 )
      { sound(2000);
	  delay(50);
	  nosound();
      rollsts[0]='9';
      sts1[0]='9';
      stg=0;
       cleardevice();
       searchtotalstu();

      }



       else if(stg==1 )
      {sound(2000);
	  delay(50);
	  nosound();
      stg=0;
       cleardevice();
       searchtotalstu();
      }


       if (x>=210 && y>=130 && x<=240 && y<=150 && sts==1 && stg1==0)
      {sound(2000);
	  delay(50);
	  nosound();
      stg1=1;
       ssdrop2();
      }
      else if (x>=210 && y>=130 && x<=240 && y<=150 && sts==1 && stg1==0)
      {sound(2000);
	  delay(50);
	  nosound();
      stg1=1;
       ssdrop2();
      }
      else if(x>=210 && y>=155 && x<=240 && y<=175&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='0';
      sts2[0]='0';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }

      else if(x>=210 && y>=179 && x<=240 && y<=199&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='1';
      sts2[0]='1';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=203 && x<=240 && y<=223&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='2';
      sts2[0]='2';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=227 && x<=240 && y<=247&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='3';
      sts2[0]='3';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=251 && x<=240 && y<=271&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='4';
      sts2[0]='4';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=275 && x<=240 && y<=295&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='5';
      sts2[0]='5';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=299 && x<=240 && y<=319&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='6';
      sts2[0]='6';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=323 && x<=240 && y<=343&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='7';
      sts2[0]='7';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=347 && x<=240 && y<=367&& stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='8';
      sts2[0]='8';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(x>=210 && y>=371 && x<=240 && y<=391 && stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rollsts[1]='9';
      sts2[0]='9';
      stg1=0;
       cleardevice();
       searchtotalstu();

      }
      else if(stg1==1)
      { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      stg1=0;
      searchtotalstu();

      }



      if (x>=210 && y>=130 && x<=240 && y<=150 && ss==1 && sst2==0)
      {sound(2000);
	  delay(50);
	  nosound();
      sst2=1;
       ssdrop2();
      }
      else if(x>=210 && y>=155 && x<=240 && y<=175&& sst2==1)
      {sound(2000);
	  delay(50);
	  nosound();
       roll[1]='0';
      ss2[0]='0'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }

      else if(x>=210 && y>=179 && x<=240 && y<=199&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='1';
      ss2[0]='1'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=203 && x<=240 && y<=223&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='2';
      ss2[0]='2'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=227 && x<=240 && y<=247&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='3';
      ss2[0]='3'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=251 && x<=240 && y<=271&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='4';
      ss2[0]='4'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=275 && x<=240 && y<=295&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='5';
      ss2[0]='5'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=299 && x<=240 && y<=319&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='6';
      ss2[0]='6'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=323 && x<=240 && y<=343&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='7';
      ss2[0]='7'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=347 && x<=240 && y<=367&& sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='8';
      ss2[0]='8'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(x>=210 && y>=371 && x<=240 && y<=391 && sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
       roll[1]='9';
      ss2[0]='9'; ss2[2]=NULL;
      sst2=0;
       cleardevice();
       searchstu();

      }
      else if(sst2==1)
      { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      sst2=0;
      searchstu();

      }

      if(x>=320 && y>=130 && x<=350 && y<=150 && sst3==0 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sst3=1;
      ssdrop3();
      }
       else if(x>=320 && y>=155 && x<=350 && y<=175&& sst3==1 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
       sname1[0]='0';
      ss3[0]='0'; ss3[2]=NULL;
      sst3=0;
       cleardevice();
       searchstu();

      }

      else if(x>=320 && y>=179 && x<=350 && y<=199&& sst3==1 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
       sname1[0]='1';
      ss3[0]='1'; ss3[2]=NULL;
      sst3=0;
       cleardevice();
       searchstu();

      }
      else if(x>=320 && y>=203 && x<=350 && y<=223&& sst3==1 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
       sname1[0]='2';
      ss3[0]='2'; ss3[2]=NULL;
      sst3=0;
       cleardevice();
       searchstu();

      }
      else if(x>=320 && y>=227 && x<=350 && y<=247&& sst3==1 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[0]='3';
      ss3[0]='3'; ss3[2]=NULL;
      sst3=0;
       cleardevice();
       searchstu();

      }
       else if(sst3==1 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      sst3=0;
      searchstu();

      }


       if(x>=360 && y>=130 && x<=390 && y<=150 && ss==1 && sst4==0)
     { sound(2000);
	  delay(50);
	  nosound();
      sst4=1;
      ssdrop4();
      }
       else	if(x>=360 && y>=155 && x<=390 && y<=175 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='0';
       ss4[0]='0'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=179 && x<=390 && y<=199 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sst4=0;
       sname1[1]='1';
       ss4[0]='1'; ss4[2]=NULL;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=203 && x<=390 && y<=223 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='2';
       ss4[0]='2'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=227 && x<=390 && y<=247 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sst4=0;
       sname1[1]='3';
      ss4[0]='3'; ss1[2]=NULL;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=251 && x<=390 && y<=271 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='4';
      ss4[0]='4'; ss4[2]=NULL;
      sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=275 && x<=390 && y<=295 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='5';
       ss4[0]='5'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=299 && x<=390 && y<=319 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='6';
       ss4[0]='6'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=323 && x<=390 && y<=343 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='7';
       ss4[0]='7'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=347 && x<=390 && y<=367 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='8';
       ss4[0]='8'; ss4[2]=NULL;
       sst4=0;
       cleardevice();
       searchstu();
      }
      else  if(x>=360 && y>=371 && x<=390 && y<=391 && ss==1 && sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[1]='9';
      ss4[0]='9'; ss4[2]=NULL;
      sst4=0;
       cleardevice();
       searchstu();
      }
      else if(sst4==1)
      {sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      sst4=0;
      searchstu();
      }
       if(x>=430 && y>=130 && x<=470 && y<=150 && ss==1)
       {sound(2000);
	  delay(50);
	  nosound();
       sst5=1;
       ssdrop5();
       }
	else	if(x>=430 && y>=155 && x<=470 && y<=175 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='1';
       ss5[0]='1';ss5[1]=' '; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }
      else	if(x>=430 && y>=179 && x<=470 && y<=199 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='2';
       ss5[0]='2';ss5[1]=' '; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=203 && x<=470 && y<=223 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='3';
       ss5[0]='3';ss5[1]=' '; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=227 && x<=470 && y<=247 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='4';
       ss5[0]='4';ss5[1]=' '; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=251 && x<=470 && y<=271 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='5';
       ss5[0]='5'; ss5[1]=' ';ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=275 && x<=470 && y<=295 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='6';
       ss5[0]='6';ss5[1]=' '; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=299 && x<=470 && y<=319 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='7';
       ss5[0]='7'; ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=323 && x<=470 && y<=343 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='8';
       ss5[0]='8'; ss5[1]=' ';ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=347 && x<=470 && y<=367 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='0';sname1[4]='9';
       ss5[0]='9'; ss5[1]=' ';ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=371 && x<=470 && y<=391 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='1';sname1[4]='0';
       ss5[0]='1'; ss5[1]='0';ss5[2]=NULL;
       sst5=0;
       cleardevice();
       searchstu();
      }else	if(x>=430 && y>=395 && x<=470 && y<=415 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='1';sname1[4]='1';
       ss5[0]='1'; ss5[2]=NULL;ss5[1]='1';
       sst5=0;
       cleardevice();
       searchstu();
      }
      else	if(x>=430 && y>=419 && x<=470 && y<=429 && ss==1 && sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      sname1[3]='1';sname1[4]='2';
       ss5[0]='1'; ss5[2]=NULL;ss5[1]='2';
       sst5=0;
       cleardevice();
       searchstu();
      }
      else if(sst5==1)
      {sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      sst5=0;
      searchstu();

      }
      if(x>=240 && y>=180 && x<=300 && y<=200 && ss==1)
      {sound(2000);
	  delay(50);
	  nosound();
      searchsturesult();
      }

      else if(x>=250 && y>=210 && x<=300 && y<=230 && (ss==1 || sts==1|| tca==1))
      {sound(2000);
	  delay(50);
	  nosound();
      ss=0;
       sts=0;
       tca=0;
      cleardevice();
      mp=1;
      mainPaige();
      }
      if(x>=240 && y>=180 && x<=300 && y<=200 && sts==1) //search button student total attendence
      {sound(2000);
	  delay(50);
	  nosound();
      searchtotalprint();
      }

      if(x>=120 && y>=250 && x<=400 && y<=275 && mp==1) //search student's total attendence
      {sound(2000);
	  delay(50);
	  nosound();
      sts=1;
      mp=0;
      cleardevice();
      searchtotalstu();
      }
      if(x>=410 && y>=130 && x<=470 && y<=150 && sts==1 && stg2==0)
      {sound(2000);
	  delay(50);
	  nosound();
      stg2=1;
       settextstyle(DEFAULT_FONT,0,1);
       delay(100);
       rectangle(410,155,470,175);
       outtextxy(417,162,"even");
       delay(100);
       rectangle(410,180,470,200);
       outtextxy(417,187,"odd");
      }
      else if(x>=410&&y>=155&&x<=470&&y<=175&&stg2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      stg2=0;
       strcpy(sts3,"even");
       strcpy(sem,"even");
       cleardevice();
       searchtotalstu();
      }
      else if(x>=410&&y>=180&&x<=470&&y<=200&&stg2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      stg2=0;
       strcpy(sts3,"odd");
       strcpy(sem,"odd");
       cleardevice();
       searchtotalstu();
      }

      if(x>=120 && y>=295 && x<=400 && y<=320 && mp==1) //total class attendence
      {sound(2000);
	  delay(50);
	  nosound();
      mp=0;
       tca=1;
       cleardevice();
       totalclassatd();
      }



       if(x>=320 && y>=130 && x<=350 && y<=150 && tca==1 && tca1==0)
      {sound(2000);
	  delay(50);
	  nosound();
      tca1=1;
      ssdrop3();
      }
       else if(x>=320 && y>=155 && x<=350 && y<=175&& tca==1 && tca1==1)
      {sound(2000);
	  delay(50);
	  nosound();
       rolltca[0]='0';
      tcad[0]='0';
      tca1=0;
       cleardevice();
       totalclassatd();

      }

      else if(x>=320 && y>=179 && x<=350 && y<=199&& tca==1 && tca1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rolltca[0]='1';
      tcad[0]='1';
      tca1=0;
       cleardevice();
       totalclassatd();

      }
      else if(x>=320 && y>=203 && x<=350 && y<=223&& tca==1 && tca1==1)
      { sound(2000);
	  delay(50);
	  nosound();
       rolltca[0]='2';
      tcad[0]='2';
      tca1=0;
       cleardevice();
       totalclassatd();

      }
      else if(x>=320 && y>=227 && x<=350 && y<=247&& tca==1 && tca1==1)
      { sound(2000);
	  delay(50);
	  nosound();
      rolltca[0]='3';
      tcad[0]='3'; tcad[2]=NULL;
      tca1=0;
       cleardevice();
       totalclassatd();

      }
       else if(tca==1 && tca1==1)
      { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      tca1=0;
      totalclassatd();

      }


       if(x>=360 && y>=130 && x<=390 && y<=150 && tca==1 && tca2==0)
     { sound(2000);
	  delay(50);
	  nosound();
      tca2=1;
      ssdrop4();
      }
       else	if(x>=360 && y>=155 && x<=390 && y<=175 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='0';
       tcad1[0]='0';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=179 && x<=390 && y<=199 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      tca2=0;
       rolltca[1]='1';
       tcad1[0]='1';
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=203 && x<=390 && y<=223 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='2';
       tcad1[0]='2';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=227 && x<=390 && y<=247 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      tca2=0;
       rolltca[1]='3';
      tcad1[0]='3';
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=251 && x<=390 && y<=271 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='4';
      tcad1[0]='4';
      tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=275 && x<=390 && y<=295 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='5';
       tcad1[0]='5';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=299 && x<=390 && y<=319 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='6';
       tcad1[0]='6';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=323 && x<=390 && y<=343 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='7';
       tcad1[0]='7';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=347 && x<=390 && y<=367 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='8';
       tcad1[0]='8';
       tca2=0;
       cleardevice();
       totalclassatd();
      }
      else  if(x>=360 && y>=371 && x<=390 && y<=391 && tca==1 && tca2==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[1]='9';
      tcad1[0]='9';
      tca2=0;
       cleardevice();
       totalclassatd();
      }
      else if(tca2==1)
      { sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      tca2=0;
      totalclassatd();
      }
       if(x>=430 && y>=130 && x<=470 && y<=150 && tca==1 && tca3==0 )
       {sound(2000);
	  delay(50);
	  nosound();
       tca3=1;
       ssdrop5();
       }
	else	if(x>=430 && y>=155 && x<=470 && y<=175 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='1';
       tcam[0]='1';tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }
      else if(x>=430 && y>=179 && x<=470 && y<=199 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='2';
       tcam[0]='2';tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=203 && x<=470 && y<=223 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='3';
       tcam[0]='3';tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=227 && x<=470 && y<=247 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='4';
       tcam[0]='4';tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=251 && x<=470 && y<=271 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='5';
       tcam[0]='5'; tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=275 && x<=470 && y<=295 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='6';
       tcam[0]='6';tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=299 && x<=470 && y<=319 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='7';
       tcam[0]='7'; tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=323 && x<=470 && y<=343 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='8';
       tcam[0]='8'; tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=347 && x<=470 && y<=367 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='0';rolltca[4]='9';
	tcam[0]='9'; tcam[1]=' ';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=371 && x<=470 && y<=391 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[2]='-';rolltca[3]='1';rolltca[4]='0';
       tcam[0]='1'; tcam[1]='0';
       tca3=0;
       cleardevice();
       totalclassatd();
      }else	if(x>=430 && y>=395 && x<=470 && y<=415 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='1';rolltca[4]='1';
       tcam[0]='1';tcam[1]='1';
       tca3=0;
       cleardevice();
       totalclassatd();
      }
      else	if(x>=430 && y>=419 && x<=470 && y<=429 && tca==1 && tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      rolltca[3]='1';rolltca[4]='2';
       tcam[0]='1';tcam[1]='2';
       tca3=0;
       cleardevice();
       totalclassatd();
      }
      else if(tca3==1)
      {sound(2000);
	  delay(50);
	  nosound();
      cleardevice();
      tca3=0;
      totalclassatd();

      }
      if(x>=240 && y>=180 && x<=300 && y<=200 &&tca==1)
       {sound(2000);
	  delay(50);
	  nosound();
       totalclassprint();
       }
     if(ta==1)
     {
     if(x>=495 && y>=420 && x<=565 && y<=450) //reset
       {sound(2000);
	  delay(50);
	  nosound();
       reset();
       pc=GREEN;
       ac=WHITE;
      }
	else if(x>=565 && y>=90 && x<595 && y<=105) //present
	 {sound(2000);
	  delay(50);
	  nosound();
	   pc=2;
	   ac=15;
	   color=2;
	   reset();
	 }

	 else if(x>=595 && y>=90 && x<=625 && y<=105)   //absent
	{ sound(2000);
	  delay(50);
	  nosound();
	 pc=15;
	 ac=4;
	 color=4;
	 reset();
	}

       else if(x>=570 && y>=420 && x<=620 && y<=450) //done
       {sound(2000);
	  delay(50);
	  nosound();
       write();
	ta=0;
	mp=1;
	cleardevice();
	mainPaige();

       }


      if(x>=105 && y>=115 && x<=140 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,120," 1");
      pst[0]=1;
      }
      else if(x>=145 && y>=115 && x<=180 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,120," 2");
      pst[1]=2;
      }
      else if(x>=185 && y>=115 && x<=220 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,120," 3");
      pst[2]=3;
      }
      else if(x>=225 && y>=115 && x<=260 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,120," 4");
      pst[3]=4;
      }
      else if(x>=265 && y>=115 && x<=300 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,120," 5");
      pst[4]=5;
      }
      else if(x>=305 && y>=115 && x<=340 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,120," 6");
      pst[5]=6;
      }
      else if(x>=345 && y>=115 && x<=380 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,120," 7");
      pst[6]=7;
      }else if(x>=385 && y>=115 && x<=420 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,120," 8");
      pst[7]=8;
      }else if(x>=425 && y>=115 && x<=460 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,120," 9");
      pst[8]=9;
      }else if(x>=465 && y>=115 && x<=500 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,120,"10");
      pst[9]=10;
      }else if(x>=505 && y>=115 && x<=540 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,120,"11");
      pst[10]=11;
      }else if(x>=545 && y>=115 && x<=580 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,120,"12");
      pst[11]=12;
      }else if(x>=585 && y>=115 && x<=620 && y<=150)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,120,"13");
      pst[12]=13;
      }
       if(x>=105 && y>=155 && x<=140 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,160,"14");
      pst[13]=14;
      }
      else if(x>=145 && y>=155 && x<=180 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,160,"15");
      pst[14]=15;
      }
      else if(x>=185 && y>=155 && x<=220 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,160,"16");
      pst[15]=16;
      }
      else if(x>=225 && y>=155 && x<=260 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,160,"17");
      pst[16]=17;
      }
      else if(x>=265 && y>=155 && x<=300 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,160,"18");
      pst[17]=18;
      }
      else if(x>=305 && y>=155 && x<=340 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,160,"19");
      pst[18]=19;
      }
      else if(x>=345 && y>=155 && x<=380 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,160,"20");
      pst[19]=20;
      }else if(x>=385 && y>=155 && x<=420 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,160,"21");
      pst[20]=21;
      }else if(x>=425 && y>=155 && x<=460 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,160,"22");
      pst[21]=22;
      }else if(x>=465 && y>=155 && x<=500 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,160,"23");
      pst[22]=23;
      }else if(x>=505 && y>=155 && x<=540 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,160,"24");
      pst[23]=24;
      }else if(x>=545 && y>=155 && x<=580 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,160,"25");
      pst[24]=25;
      }else if(x>=585 && y>=155 && x<=620 && y<=190)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,160,"26");
      pst[25]=26;
      }
      if(x>=105 && y>=195 && x<=140 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,200,"27");
      pst[26]=27;
      }
      else if(x>=145 && y>=195 && x<=180 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,200,"28");
      pst[27]=28;
      }
      else if(x>=185 && y>=195 && x<=220 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,200,"29");
      pst[28]=29;
      }
      else if(x>=225 && y>=195 && x<=260 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,200,"30");
      pst[29]=30;
      }
      else if(x>=265 && y>=195 && x<=300 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,200,"31");
      pst[30]=31;
      }
      else if(x>=305 && y>=195 && x<=340 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,200,"32");
      pst[31]=32;
      }
      else if(x>=345 && y>=195 && x<=380 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,200,"33");
      pst[32]=33;
      }else if(x>=385 && y>=195 && x<=420 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,200,"34");
      pst[33]=34;
      }else if(x>=425 && y>=195 && x<=460 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,200,"35");
      pst[34]=35;
      }else if(x>=465 && y>=195 && x<=500 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,200,"36");
      pst[35]=36;
      }else if(x>=505 && y>=195 && x<=540 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,200,"37");
      pst[36]=37;
      }else if(x>=545 && y>=195 && x<=580 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,200,"38");
      pst[37]=38;
      }else if(x>=585 && y>=195 && x<=620 && y<=230)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,200,"39");
      pst[38]=39;
      }
      else if(x>=105 && y>=235 && x<=140 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,240,"40");
      pst[39]=40;
      }
      else if(x>=145 && y>=235 && x<=180 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,240,"41");
      pst[40]=41;
      }
      else if(x>=185 && y>=235 && x<=220 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,240,"42");
      pst[41]=42;
      }
      else if(x>=225 && y>=235 && x<=260 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,240,"43");
      pst[42]=43;
      }
      else if(x>=265 && y>=235 && x<=300 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,240,"44");
      pst[43]=44;
      }
      else if(x>=305 && y>=235 && x<=340 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,240,"45");
      pst[44]=45;
      }
      else if(x>=345 && y>=235 && x<=380 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,240,"46");
      pst[45]=46;
      }else if(x>=385 && y>=235 && x<=420 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,240,"47");
      pst[46]=47;
      }else if(x>=425 && y>=235 && x<=460 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,240,"48");
      pst[47]=48;
      }else if(x>=465 && y>=235 && x<=500 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,240,"49");
      pst[48]=49;
      }
      else if(x>=505 && y>=235 && x<=540 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,240,"50");
      pst[49]=50;
      }
      else if(x>=545 && y>=235 && x<=580 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,240,"51");
      pst[50]=51;
      }
      else if(x>=585 && y>=235 && x<=620 && y<=270)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,240,"52");
      pst[51]=52;
      }
      else if(x>=105 && y>=275 && x<=140 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,280,"53");
      pst[52]=53;
      }
      else if(x>=145 && y>=275 && x<=180 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,280,"54");
      pst[53]=54;
      }
      else if(x>=185 && y>=275 && x<=220 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,280,"55");
      pst[54]=55;
      }
      else if(x>=225 && y>=275 && x<=260 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,280,"56");
      pst[55]=56;
      }
      else if(x>=265 && y>=275 && x<=300 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,280,"57");
      pst[56]=57;
      }
      else if(x>=305 && y>=275 && x<=340 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,280,"58");
      pst[57]=58;
      }
      else if(x>=345 && y>=275 && x<=380 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,280,"59");
      pst[58]=59;
      }else if(x>=385 && y>=275 && x<=420 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,280,"60");
      pst[59]=60;
      }else if(x>=425 && y>=275 && x<=460 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,280,"61");
      pst[60]=61;
      }else if(x>=465 && y>=275 && x<=500 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,280,"62");
      pst[61]=62;
      }else if(x>=505 && y>=275 && x<=540 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,280,"63");
      pst[62]=63;
      }else if(x>=545 && y>=275 && x<=580 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,280,"64");
      pst[63]=64;
      }else if(x>=585 && y>=275 && x<=620 && y<=310)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,280,"65");
      pst[64]=65;
      }if(x>=105 && y>=315 && x<=140 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,320,"66");
      pst[65]=66;
      }
      else if(x>=145 && y>=315 && x<=180 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,320,"67");
      pst[66]=67;
      }
      else if(x>=185 && y>=315 && x<=220 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,320,"68");
      pst[67]=68;
      }
      else if(x>=225 && y>=315 && x<=260 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,320,"69");
      pst[68]=69;
      }
      else if(x>=265 && y>=315 && x<=300 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,320,"70");
      pst[69]=70;
      }
      else if(x>=305 && y>=315 && x<=340 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,320,"71");
      pst[70]=71;
      }
      else if(x>=345 && y>=315 && x<=380 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,320,"72");
      pst[71]=72;
      }else if(x>=385 && y>=315 && x<=420 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,320,"73");
      pst[72]=73;
      }else if(x>=425 && y>=315 && x<=460 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,320,"74");
      pst[73]=74;
      }else if(x>=465 && y>=315 && x<=500 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,320,"75");
      pst[74]=75;
      }else if(x>=505 && y>=315 && x<=540 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,320,"76");
      pst[75]=76;
      }else if(x>=545 && y>=315 && x<=580 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,320,"77");
      pst[76]=77;
      }else if(x>=585 && y>=315 && x<=620 && y<=350)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,320,"78");
      pst[77]=78;
      }if(x>=105 && y>=355 && x<=140 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(115,360,"79");
      pst[78]=79;
      }
      else if(x>=145 && y>=355 && x<=180 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(155,360,"80");
      pst[79]=80;
      }
      else if(x>=185 && y>=355 && x<=220 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(195,360,"81");
      pst[80]=81;
      }
      else if(x>=225 && y>=355 && x<=260 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(235,360,"82");
      pst[81]=82;
      }
      else if(x>=265 && y>=355 && x<=300 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(275,360,"83");
      pst[82]=83;
      }
      else if(x>=305 && y>=355 && x<=340 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(315,360,"84");
      pst[83]=84;
      }
      else if(x>=345 && y>=355 && x<=380 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(355,360,"85");
      pst[84]=85;
      }else if(x>=385 && y>=355 && x<=420 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(395,360,"86");
      pst[85]=86;
      }else if(x>=425 && y>=355 && x<=460 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(435,360,"87");
      pst[86]=87;
      }else if(x>=465 && y>=355 && x<=500 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(475,360,"88");
      pst[87]=88;
      }else if(x>=505 && y>=355 && x<=540 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(515,360,"89");
      pst[88]=89;
      }else if(x>=545 && y>=355 && x<=580 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(555,360,"90");
      pst[89]=90;
      }
      else if(x>=585 && y>=355 && x<=620 && y<=390)
      {
      settextstyle(SANS_SERIF_FONT,0,1);
      setcolor(color);
      outtextxy(595,360,"91");
      pst[90]=91;
      }
       else if(x>=105 && y>=395 && x<=140 && y<=430)
      { settextstyle(SANS_SERIF_FONT,0,1);
	setcolor(color);
	outtextxy(115,400,"92");
       pst[91]=92;
      }


      }//ta==1

    }
    else if(button==2)
    {//button=-1;
    }
   }
  }
  last: closegraph();
  getch();
}
