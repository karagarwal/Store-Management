/*
******************************************************************************
			    HEADER FILE USED
******************************************************************************
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>

/*
******************************************************************************
			 ALL FUNCTIONS PROTOTYPES
******************************************************************************
*/

void box(int l,int r,int t,int b,int c,int d);
void welcome();
void back();
void info();
void pass();
void load();
void topic();
void menu();
void date();
void time();
void thanks();
void recbox();
void bill();
int count(int);
void add_item();
void iss_item();
void v_stock();
void u_stock();
void adbill();
void shwbill();
void mdybill();
void dltbill();
int rate(char ar[30]);
void printbl(int);
void dialog(int);
void dialog1(int);
void up_rec(int);
void delbill(int);
/*
******************************************************************************
				  MAIN BODY
******************************************************************************
*/

void main()
{
  clrscr();
 welcome();
 topic();
 pass();
 load();
  menu();
}
/*
******************************************************************************
			     FUNCTION FOR BOX
******************************************************************************
*/

void box(int l,int r,int t,int b,int c,int d)
{

       gotoxy(l,t);
	 textcolor(c);
	 cprintf("É");	               //Alt+201= É
	 for(int i=l+1;i<r;i++)
	 {
	   cprintf("Í");	       //Alt+205= Í
	   delay(d);
	 }
	 cprintf("»");	               //Alt+187= »

  gotoxy(l,t+1);

	 for(i=t+1;i<b;i++)

      {
	gotoxy(l,i);
	cprintf("º");		       //Alt+186= º
	delay(d);
	gotoxy(r,i);
	cprintf("º");		       //Alt+186= º
	delay(d);
      }
  gotoxy(l,b);
       cprintf("È");		       //Alt+200= È

	 for(i=l+1;i<r;i++)
	  {
	    cprintf("Í");	       //Alt+205= Í
	    delay(d);
	  }
	 cprintf("¼");	               //Alt+188= ¼
}

/*
******************************************************************************
			  FUNCTION FOR BACKGROUND
******************************************************************************
*/

void back()
 {
   int i,j;
  clrscr();
 gotoxy(2,3);
  for(j=0;j<2;j++)
   {
     for(i=1;i<67;i++)
     {
       textcolor(3+128);
       cprintf("° °");
     }
   }
    cprintf("° ");             //Alt+176= °
 }

/*
******************************************************************************
			FUNCTION FOR WELCOME SCREEN
******************************************************************************
*/

void welcome()
{
  back();

  box(1,80,2,25,6,0);
  gotoxy(35,4);
  textcolor(4);
  cprintf("WELCOME!!!!");
  gotoxy(35,5);
  cprintf("ÄÄÄÄÄÄÄÄÄÄÄ");
  info();
}

/*
******************************************************************************
			   FUNCTION FOR INFORMATION
******************************************************************************
*/

void info()
{
  gotoxy(19,8);
    textcolor(12);
       cprintf("GEETANJALI INSTITUTE OF TECHNICAL STUDIES");
    gotoxy(35,10);
       cprintf("UDAIPUR");
    gotoxy(31,12);
       cout<<"SESSION:2015-2016";
    gotoxy(3,14);
      textcolor(9);
       cprintf("NAME:1. KARTIK AGARWAL (14EGICS040)");
     gotoxy(3,15);
       cprintf("     2. MAHENDRA PAL SOLANKI (14EGICS044)");
    gotoxy(3,17);
      textcolor(10);
       cprintf("YEAR     : IInd");
     gotoxy(3,18);
       cprintf("SEMESTER : IIIrd 'A'");
    gotoxy(8,20);
      textcolor(2);
       cprintf("SUBMITTED TO: Ma'am Charu Kavadia");
    gotoxy(22,22);
       textcolor(15);
       cprintf("Press any key...");

getch();
}

/*
******************************************************************************
			   FUNCTION FOR TOPIC NAME
******************************************************************************
*/

void topic()
{

 int i,r,c,col=1;
 int i1,r1,c1;
 char s[27]="Store Management System!!!!";
 char p[7]="  TOPIC";
    clrscr( );
   c1=34;
   for(i=0;i<7;i++)
   {
     for(r1=1;r1<=10;r1++)
       {
	   gotoxy(c1,r1);
	   textcolor(col);
	   cprintf("%c",p[i]);
	   delay(10);
	   gotoxy(c1,r1);
	   cout<<" ";
	   delay(3);
       }
  gotoxy(c1,r1);
  cprintf("%c",p[i]);
     c1++;
     col++;
   }

   c1=25;
   for(i=0;i<26;i++)
   {
     for(r=25;r>=14;r--)
       {
	  if(col==16)
	   col=1;
	   gotoxy(c1,r);
	   textcolor(col);
	   cprintf("%c",s[i]);
	   delay(9);
	   gotoxy(c1,r);
	   cout<<" ";
	   delay(3);
       }
  gotoxy(c1,r);
  cprintf("%c",s[i]);
     c1++;
     col++;
   }
getch( );
}


/*
******************************************************************************
			  FUNCTION FOR PROGRESS BAR
******************************************************************************
*/

void load()
{
clrscr();

box(1,79,1,25,3,1);
box(13,66,10,12,11,0);

	int j,k=1;
      for(j=15;j<65;j++)
 {
    gotoxy(j,11);
    textcolor(j-14);
    cprintf("²");
    delay(75);

    gotoxy(5,15);
    textcolor(j);
    cprintf("Processing Please Wait!!!!!!");
    textcolor(15);
    gotoxy(32,10);
    cprintf("LOADING ");
    gotoxy(40,10);
     cprintf("%d %",k*2);
     k++;
 }

  gotoxy(23,18);
   textcolor(3);
   cprintf("LOADING COMPLETE..");


   gotoxy(25,20);
   textcolor(3);
   cprintf("Press any key to Continue..");

 getch();
}

/*
******************************************************************************
		      FUNCTION FOR PASSWORD CHECKING
******************************************************************************
*/

void pass()
{
 int j;

  clrscr();


 for(j=3;j>=0 ; )
  {
    if(j<=3)
     {
      clrscr();
       box(1,79,1,25,3,0);               //border
       box(35,69,9,11,9,0);              //username
       box(35,69,12,14,9,0);            //password
       box(45,77,22,24,9,0);            //attempt
     }


   char p[20],u[20];
  int a,i,pos;
   gotoxy(15,10);
     textcolor(15);
     cprintf("Enter The Username:");
   gotoxy(15,13);
     cprintf("Enter the Password:");
  gotoxy(51,23);
  textcolor(3);
  cprintf("No. of attempts left: ");

   cprintf("%d",j);

   gotoxy(37,10);
     textcolor(15);
	 gets(u);
   gotoxy(37,13);
 pos=37;
     for(i=0 ; 1 ; )
       {
	p[i]=getch();
	  if(p[i]=='\b')
	   {
	     if(pos>=38)
	      {
		cout<<'\b';
		 cout<<' '<<'\b';
		  i--;  pos--;
	      }
	     else
	       gotoxy(37,13);
	       continue;
	   }
     textcolor(15);

      cprintf("*");
       pos++;
       if(p[i]=='\r'||p[i]=='\n')
	break;
	i++;
       }
       p[i]='\0';
     cout<<"\b ";
      if(strcmp(u,"admin")==0  &&  strcmp(p,"pass")==0  )
	{
	  gotoxy(13,20);
	      textcolor(11);
	      cprintf("USERNAME and PASSWORD MATCH...");
	    delay(1500);
	 clrscr();
	    box(1,79,1,25,3,1);
	  gotoxy(30,12);
	  textcolor(4);
	      cprintf("ACCESS GRANTED....");
	     gotoxy(30,14);
	      cprintf(".....MOVE ON......");
	  delay(1500);
	  clrscr();
	 break;
	}
     else
      {
	  gotoxy(13,20);
	      textcolor(11);
	      cprintf("USERNAME and PASSWORD doesn't MATCH...");
	    delay(1000);
	     j = j--;
	     //getch();
	if(j==0)
	{
	 clrscr();
	 box(1,79,1,25,3,1);
	  gotoxy(26,12);
	 textcolor(4);
	      cprintf("ACCESS DENIED....");
	  gotoxy(28,15);
	      cprintf("All attempts over....");
	 delay(1200);
	 clrscr();

	gotoxy(25,13);
	  textcolor(4);
	   cprintf("Oopssss You Have To Quit!!!!!!");
	      delay(100);

	    box(11,69,11,15,9,0);
	      delay(90);

	    box(9,71,9,17,9,0);
	      delay(90);

	    box(7,73,7,19,9,0);
	      delay(90);

	    box(5,75,5,21,9,0);
	      delay(90);

	    box(3,77,3,23,9,0);
	      delay(90);

	    box(1,79,1,25,9,0);
	      delay(500);

	    box(1,79,1,25,0,0);
	      delay(100);

	    box(3,77,3,23,0,0);
	      delay(100);

	    box(5,75,5,21,0,0);
	      delay(100);

	    box(7,73,7,19,0,0);
	      delay(100);

	    box(9,71,9,17,0,0);
	      delay(100);

	    box(11,69,11,15,0,0);
	      delay(200);
	 exit(0);

	 }  // End of if loop

       getch();
       }   //  End of else loop
   }  // End of for loop
} //End of function pass

/*
******************************************************************************
			   FUNCTION FOR TIME
******************************************************************************
*/
 void time()
  {
    struct time t;
    box(7,24,15,17,11,0);
    while(!kbhit())
	{
	     gettime(&t);
	      gotoxy(8,16);
	      textcolor(12);
	      cprintf("Time:");
	      cprintf("%d",t.ti_hour);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_min);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_sec);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_hund);
	      delay(10);
	 }
     }
/*
******************************************************************************
			   FUNCTION FOR DATE
******************************************************************************
*/
void date()
{
struct date d;
 box(7,24,18,20,11,0);
    getdate(&d);
    gotoxy(9,19);
    textcolor(12);
    cprintf("Date:");
    cprintf("%d", d.da_day);
    cprintf("/%d", d.da_mon);
    cprintf("/%d", d.da_year);
}


/*
******************************************************************************
				MAIN MENU
******************************************************************************
*/
void menu()
{

  clrscr();
  int C=8,R=6,y;
   box(1,79,1,25,6,1);//border
  char ch;
  char men[5][22]={"1. Add New Item","2. Issue Item","3. View Stock","4. Update Stock","EXIT"};


   gotoxy(26,4);
   textcolor(3);
    cprintf("\"STORE MANAGEMENT SYSTEM\"");

   textcolor(9);
   gotoxy(5,6);
    cprintf(men[0]);

   gotoxy(5,8);
    cprintf(men[1]);

   gotoxy(5,10);
    cprintf(men[2]);

   gotoxy(5,12);
    cprintf(men[3]);

   gotoxy(73,23);
    cprintf(men[4]);

   date();
   time();

  gotoxy(5,6);
   textcolor(12);
     cprintf(men[0]);
    gotoxy(8,6);
getch();  getch();
  while(1)
   {

    if(R==6)
     {
       textcolor(12);
       gotoxy(5,6);
       cprintf(men[0]);
       textcolor(9);
       gotoxy(73,23);
       cprintf(men[4]);
       gotoxy(8,6);
     }

    ch=getch();

	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;
	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	    }
	   if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,10);
	    }
	   if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(9);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	    }

	  if(R==14)
	   {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(12);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(73,23);

	   }

	 if(R==16)
	   {
	     gotoxy(5,6);
	     R=6;
	     textcolor(12);
	     cprintf(men[0]);
	     gotoxy(8,6);

	     textcolor(9);
	       gotoxy(5,8);
	       cprintf(men[1]);
	   }

	}


      if(ch=='H')                        // FOR UP ARROW KEY
       {
	gotoxy(C,R-2);
	  R=R-2;

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	   }

	   if(R==8)
	   {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	  }

	   if(R==10)
	   {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,10);
	   }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(9);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	   }

	   if(R==4)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(12);
	      gotoxy(73,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	   }

       if(R<6)
	{
	  gotoxy(73,23);
	  R=14;
	}
       if(R==23)
	{
	  gotoxy(5,12);
	  R=12;
	}
      }

      if(ch=='\r')
	{
	 y=wherey();

	  if(y==6)
	    add_item();
	  if(y==8)
	    iss_item();
	  if(y==10)
	    v_stock();
	  if(y==12)
	    u_stock();

	 if(y==23)
	   thanks();

	 menu();
	}
     }
 }
/*******************************************************************************
				CLASSES
********************************************************************************/
//----------------------------ISSUE ITEMS CLASS----------------------------------
class issue
{
private:
char ptynm[50],ptyadd[50];
int dd,mm,yy;
char desc[20];
int pky,qun,rt,inv,sno;
unsigned long amn;

int  qnty,cst;
char nm[20];



public:
     void convert(unsigned long amn)
     {
	char ones[20][11] = {"", "one", "two", "three","four","five","six","seven",
			    "eight","nine","ten","eleven","twelve","thirteen","fourteen",
			    "fifteen","sixteen","seventeen","eighteen","nineteen"};
       char tens[10][10] = {"","ten","twenty", "thirty","forty","fifty","sixty","seventy",
			    "eighty","ninety"};
  textcolor(11);
       if(amn>=100000)
	{
	  convert(amn/100000);
	   cprintf(" lakh");
	     amn=amn%100000;
	      cout<<" ";
	       convert(amn);
	}

       else
	 if(amn>=1000)
	  {
	   convert(amn/1000);
	     cprintf(" thousand");
	     amn=amn%1000;
	      cout<<" " ;
		convert(amn);
	  }

    else
     if(amn>=100)
      {
	convert(amn/100);
	  cprintf(" hundred");
	   amn=amn%100;
	    cout<<" ";
	    convert(amn);
      }
    else
      if(amn>=20)
       {
	cprintf("%s",tens[amn/10]);
	 amn=amn%10;
	    cout<<" ";
	    if(amn==0) cout<<"\b";
	    convert(amn);
       }

    else
    {
	cprintf(ones[amn]);
    }
  return;
}
    void input()
      {
	clrscr();
	 bill();

	  textcolor(15);
	  gotoxy(3,6);
       //ptynm input constraints
	int i=0,j=3;
	char cho,ar[50];
    while(1)
  {
    nm_c:
    gotoxy(j,6);
    cho=getch();

     if( (cho>='a' && cho<='z') || (cho>='A' && cho <='Z') || cho==' ' )
      {
	gotoxy(j++,6);
	ar[i++]=cho;
	 cout<<cho;
      }
     else
       if(cho=='\r' || cho=='\n')
	{ ar[i]=NULL;
	  break;
	}
       else
	 if(cho=='\b')
	   {
	       i--;
	       cout<<'\b'<<' '<<'\b';
	     gotoxy(--j,6);
	   }
	 else
	  goto nm_c;
  }
    strcpy(ptynm,ar);
	  gotoxy(3,7);
	   gets(ptyadd);
	  gotoxy(41,6);
	   inv=constr_n(41,6);
     /*	  gotoxy(62,6);
	   dd=constr_dt(62,2,31);
	  gotoxy(65,6);
	   mm=constr_dt(65,2,12);
	  gotoxy(68,6);
	   yy=constr_dt(68,4,3000);
       */
   struct date d1;

    getdate(&d1);
     textcolor(9);
    gotoxy(62,6);
    cprintf("%d",d1.da_day);
    gotoxy(65,6);
    cprintf("%d",d1.da_mon);
    gotoxy(68,6);
    cprintf("%d",d1.da_year);
      dd=d1.da_day;
      mm=d1.da_mon;
      yy=d1.da_year;

	   gotoxy(3,12);
	   sno=constr_n(3,12);
	  gotoxy(8,12);
	   gets(desc);

    // for checking the rate of particluar if exist
      ifstream fin("records.txt",ios::binary);
	while(!fin.eof())
	{
	  fin.read((char *)&i1,sizeof(i1));

	  if(fin.eof() && (strcmpi(i1.nm,desc)!=0) )
	    { dialog1(1);
	    char ch;
	     while(1)
	      {
	       ch=getch();

	       if(ch=='\r')
		{  fin.close();
		iss_item();
		}
	       }
	     }
	   else
	    if(strcmpi(i1.nm,desc)==0)
	     {
	      rt=i1.cst;
	       break;
	     }

	} fin.close();

	  gotoxy(63,12);
	   cout<<rt;
	  gotoxy(49,12);
	   qun=constr_n(49,12);

    // for updating quantity in stock
      fin.open("records.txt",ios::binary|ios::in);
       int n=0;
	while(!fin.eof())
	{n++;
	  fin.read((char *)&i1,sizeof(i1));

	  if(fin.eof())
	     break;
	  else
	    if(strcmpi(i1.nm,desc)==0)
	     { issue i2;
	      int loc;
	       i2.qnty=i1.qnty-qun;
		if(i2.qnty<0)
		{
		  dialog1(2);
		    char ch;
		   while(1)
		    {
		      ch=getch();
		       if(ch=='\r')
			{  fin.close();
			  iss_item();
			}
		    }
		}
	       strcpy(i2.nm,desc);
		i2.cst=i1.cst;
	       fstream fio("records.txt",ios::binary|ios::in|ios::out);
		loc=(n-1)*sizeof(i2);
		 fio.seekg(loc);
		 fio.write((char *)&i2,sizeof(i2));
		 fio.close();

	       break;
	     }
	} fin.close();

	  amn=(float)qun*rt;
	  gotoxy(71,12);
	   cout<<amn;
	  gotoxy(70,21);
	   cout<<amn;
	   cout<<"\\-";
	  gotoxy(12,21);
	   convert(amn);
	    cprintf(" only");

	}
   void print()
      {
       clrscr();
	  bill();
	textcolor(11);
	  gotoxy(3,6);
	   cprintf("%s",ptynm);
	  gotoxy(3,7);
	   cprintf("%s",ptyadd);
	  gotoxy(51,6);
	   cprintf("%d",inv);
	  gotoxy(62,6);
	   cprintf("%d",dd);
	  gotoxy(65,6);
	   cprintf("%d",mm);
	  gotoxy(68,6);
	   cprintf("%d",yy);

	  gotoxy(3,12);
	    cprintf("%d",sno);
	  gotoxy(8,12);
	   cprintf("%s",desc);
	  gotoxy(49,12);
	   cprintf("%d",qun);
	  gotoxy(63,12);
	   cprintf("%d",rt);
	amn=(float)qun*rt;
	  gotoxy(71,12);
	   cout<<amn;
	 // cprintf("%u",amn);
	  gotoxy(70,21);
	   cout<<amn<<"/-";
	  // cprintf("%d\\-",amn);
	  gotoxy(12,21);
	   convert(amn);
	   cprintf(" only");
	 getch();
	}
/*****************************NUMBER CONSTRAINTS*****************************/
     int constr_n(int Col,int Ro)
      {
      int i=0,j=Col,var;
     char cho,num[6];
   while(i<6)
    {
    nu_c1:
      gotoxy(j,Ro);
      cho=getch();
       if(cho>='0' && cho<='9')
	{
	  gotoxy(j++,Ro);
	   cout<<cho;
	    num[i++]=cho;
	}
       else
	if(cho=='\b')
	 {
	   i--;
	     cout<<'\b'<<' '<<'\b';
	      gotoxy(--j,Ro);
	 }
	else
	 if(cho=='\r' || cho=='\n')
	   break;
	 else
	  goto nu_c1;
    }
 num[i]=NULL;
  var=atoi(num);
     return var;
      }
/****************************DATE CONSTRAINTS********************************/
int constr_dt(int Co,int lo,int mx)
{
 char dt[4],cho;
 int d,i=0,j=Co;
a: while(i<lo)
   {
    nu_c:
      gotoxy(j,6);
      cho=getch();
       if(cho>='0' && cho<='9')
	{
	  gotoxy(j++,6);
	   cprintf("%c",cho);

	    dt[i++]=cho;
	}
       else
	if(cho=='\b')
	 {
	   i--;
	     cout<<'\b'<<' '<<'\b';
	      gotoxy(--j,6);
	 }
	else
	 if(cho=='\r' || cho=='\n')
	   break;
	 else
	 goto nu_c;
    }
 dt[i]=NULL;
  d=atoi(dt);
   if(d>mx)
    { gotoxy(Co,6);
       if(Co==68)
	cout<<"    ";
       else cout<<"  ";
     i=0;j=Co;goto a;  //implement recursive
    }
 return(d);
}
/////////////////////////////////////////////////////////////////////////////
    void inputa( )
      {
	clrscr();
	box(1,79,1,25,6,1);      //l,r,t,b,c,d
	textcolor(12);
	gotoxy(19,5);
	cprintf("GEETANJALI INSTITUTE OF TECHNICAL STUDIES");

	textcolor(9);
	gotoxy(4,11);
	  cprintf("Enter the Product Name      : ");

	gotoxy(4,13);
	  cprintf("Enter the Quantity          : ");
	gotoxy(4,15);
	  cprintf("Enter the Cost (Per Piece)  : ");
      textcolor(9);
	gotoxy(34,11);
	  gets(nm);
	gotoxy(34,13);
	   qnty=constr_n(34,13);
	gotoxy(34,15);
	   cst=constr_n(34,15);
   }
   void upd_pro( )
      {
	clrscr();
	box(1,79,1,25,6,1);      //l,r,t,b,c,d
	textcolor(12);
	gotoxy(19,5);
	cprintf("GEETANJALI INSTITUTE OF TECHNICAL STUDIES");

	textcolor(9);
	gotoxy(4,11);
	  cprintf("Product Name              : ");
	gotoxy(4,13);
	  cprintf("Present Quantity          : ");
	gotoxy(4,15);
	  cprintf("Update Quantity By        : ");

	gotoxy(4,17);
	  cprintf("Present Cost (Per Piece)  : ");
	gotoxy(4,19);
	  cprintf("New Cost (Per Piece)      : ");
    int tmpc,tmpq;
      textcolor(9);
	gotoxy(32,11);
	  cprintf("%s",nm);
	gotoxy(32,13);
	  cprintf("%d",qnty);
	gotoxy(32,17);
	  cprintf("%d",cst);
	gotoxy(32,15);
	  tmpq=constr_n(32,15);
       gotoxy(32,19);
	  tmpc=constr_n(32,19);

	   strcpy(nm,nm);
       qnty+=tmpq;
	cst=tmpc;
   }


   void name()
    {
     textcolor(6);
       cprintf("%s",nm);
    }
   void quty()
    {
      textcolor(6);
	cprintf("%d",qnty);
   }
   void pnm()
    {
     textcolor(6);
       cprintf("%s",ptynm);
    }
   void idt(int l)
    {
      textcolor(6);
	  gotoxy(62,l);
	   cprintf("%d/",dd);

	  gotoxy(65,l);
	   cprintf("%d/",mm);

	  gotoxy(68,l);
	   cprintf("%d",yy);

    }
}i1;

/*******************************************************************************
				ADD NEW ITEM MENU
*******************************************************************************/

//-----------------------------ADDING ITEMS-----------------------------------
 void add_item()
  {
   clrscr();
   char op;
   ofstream fout("records.txt",ios::binary|ios::app);
   i1.inputa();
   fout.write((char *)&i1,sizeof(i1));
   fout.close();

	gotoxy(20,20);
	 textcolor(3);
	 cprintf("Want to enter another record (Y/N) ");
 b:	 op=getch();
	 switch(op)
	  {
	    case 'y' :
	    case 'Y' :cout<<op;
		      add_item();
		      break;
	    case 'n' :
	    case 'N' : cout<<op;
		       gotoxy(20,20);
			textcolor(3);
			cprintf("Press any key to go back to Menu    \b\b\b\b\b");
			getch();
		       menu();
		       break;
	    default  : goto b;
	  }
 }
/*---------------------------------UPDATE STOCK-------------------------------*/

void up_rec(int n)
{
 clrscr();
 dialog(3);
char ch,x;
 gotoxy(32,14);
   while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(45,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(32,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==32)
	   {
	    goto con;
	   }
	  if(x==45)
	   {
	    u_stock();
	   }
       }
    }

con:
     textcolor(3);
     int loc;
   issue i2;
   fstream fio("records.txt",ios::binary|ios::in|ios::out);
       loc=(n-1)*sizeof(i2);
	fio.seekg(loc);
       fio.read((char *)&i2,sizeof(i2));
	 i2.upd_pro();
       fio.seekg(loc);
       fio.write((char *)&i2,sizeof(i2));

	 fio.close();

//  getch();
}

/*******************************************************************************
				ISSUE ITEM MENU
*******************************************************************************/

void iss_item()
{
 clrscr();
   int C=8,R=6,x,y;
 char ch;
 char opt[6][35]={"1. Add new bill","2. View previous bill","3. Modify previous bill","4. Delete previous bill","Go Back To Main Menu","EXIT"};

  box(1,79,1,25,6,1);           //l,r,t,b,c,d
   textcolor(9);
      gotoxy(35,3);
      cprintf("SALES");
    gotoxy(5,6);
     cprintf(opt[0]);
    gotoxy(5,8);
     cprintf(opt[1]);
    gotoxy(5,10);
     cprintf(opt[2]);
    gotoxy(5,12);
     cprintf(opt[3]);
    gotoxy(3,23);
     cprintf(opt[4]);
    gotoxy(73,23);
     cprintf(opt[5]);

   gotoxy(8,6);

   while(1)
   {

    if(R==6)
     {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);

     }
    ch=getch();
	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);

	     }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	    }

	    if(R==12)
	     {
	       textcolor(9);
	       gotoxy(5,10);
	       cprintf(opt[2]);
	       textcolor(12);
	       gotoxy(5,12);
	       cprintf(opt[3]);
	       textcolor(9);
	       gotoxy(3,23);
	       cprintf(opt[4]);
	       gotoxy(73,23);
	       cprintf(opt[5]);
	       gotoxy(8,12);

	     }

	    if(R==14)
	     {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=4;
	    }
	  if(R==16)
	   {
	     gotoxy(5,6);
	     textcolor(12);
	     cprintf(opt[0]);
	     textcolor(9);
	     gotoxy(3,23);
	     cprintf(opt[4]);
	     gotoxy(8,6);
	     R=6;
	   }
	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
 int x,y;
 x=wherex();
 y=wherey();
       gotoxy(C,R-2);
	  R=R-2;

	   if(R<6)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=14;
	    }

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);
	      R=6;
	    }

	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);
	      R=8;
	    }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	      R=10;
	    }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }

	  if(x==33 && y==23)
	    {
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(73,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }
	}

y=wherey();
     if(y==23)
      {
       if(ch=='M')                 // FOR RIGHT ARROW KEY
	{
	    textcolor(9);

	    gotoxy(5,6);
	    cprintf(opt[0]);

	    gotoxy(3,23);
	    cprintf(opt[4]);

	    textcolor(12);
	    gotoxy(73,23);
	    cprintf(opt[5]);

	    gotoxy(73,23);
	 R=4;
       }
      if(ch=='K')                 // FOR LEFT ARROW KEY
       {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);

	      gotoxy(5,12);
	      cprintf(opt[3]);

	      gotoxy(73,23);
	      cprintf(opt[5]);

	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);

	      gotoxy(3,23);
	 R=14;
       }
      }
      if(ch=='\r')
	{
	 y=wherey();
	 x=wherex();
	 clrscr();
	  if(y==6)
	    adbill();
	  if(y==8)
	    shwbill();
	  if(y==10)
	    mdybill();
	  if(y==12)
	    dltbill();
	  if(y==23 && x==3)
	   menu();
	  if(y==23 && x==73)
	   thanks();
	}
    }
}
/*
******************************************************************************
			FUNCTIONS FOR ISSUES
******************************************************************************
*/
//----------------------------Adding Bill-------------------------------------
void adbill()
{ issue i1;
   clrscr();
   char op;
   ofstream fout("bills.txt",ios::binary|ios::app);
   i1.input();
   fout.write((char *)&i1,sizeof(i1));
   fout.close();
getch();
iss_item();
}
//------------------------Showing Bill in Record Box--------------------------
void shwbill()
{
 clrscr();
    int i=10,j=1,l=10;
  recbox();
      textcolor(6);
    gotoxy(28,4);
       cprintf("  SALES BILL     ");
    gotoxy(64,8);
     cprintf("Invoice Date");
    /* gotoxy(2,8);
       cprintf("S.No.");
      */
      for(int c=45;c<=59;c++)
	{
	  gotoxy(c,8);
	  cout<<" ";
	}

      for(int r=10;r<=22;r++)
	{
	  gotoxy(45,r);
	  cout<<" ";
	}
     gotoxy(45,7);
       cout<<"Í";
     gotoxy(45,9);
      cout<<"Í";
     gotoxy(45,23);
       cout<<"Í";
     gotoxy(45,25);
       cout<<"Í";

  textcolor(3);
    gotoxy(4,6);
       cprintf("Select a Bill To View ");
   ifstream fin("bills.txt",ios::binary);

    if(!fin)
	{
	  gotoxy(9,10);
	  cout<<" NO RECORDS TO DISPLAY....";
	  getch();
	  iss_item();
	}

    while(!fin.eof())
     {
      fin.read((char *)&i1,sizeof(i1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	i1.pnm();
	gotoxy(62,l);
	i1.idt(l);
      l=l+1;
     }

fin.close();

int cn;
cn=count(2);
if(cn==0)
 {
   gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   iss_item();
 }

 gotoxy(9,10);

char ch,y;
int C=9,R=10;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}
      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }
      if(ch=='\r')
	{
	   y=wherey();
	    printbl(y-9);
	}
      if(ch=='1')
      {
	 iss_item();
      }
   }
}
//-----------------------------Printing Single Bill---------------------------
void printbl(int n)
{
 clrscr();

   long int loc;

    ifstream fin("bills.txt",ios::binary);
       loc=(n-1)*sizeof(i1);
       fin.seekg(loc);
     fin.read((char *)&i1,sizeof(i1));
       i1.print();
    fin.close();
 shwbill();
}

//----------------------------MODIFYING BILLS---------------------------------

void newbill(int n)
{
 dialog(1);
char ch,x;
 gotoxy(32,14);
   while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(45,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(32,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==32)
	   {
	    goto con;
	   }
	  if(x==45)
	   {
	    iss_item();
	   }
       }
    }

con:
     textcolor(3);
     int loc;
   fstream fio("bills.txt",ios::binary|ios::in|ios::out);
       loc=(n-1)*sizeof(i1);
	fio.seekg(loc);
	  i1.input();
	 fio.write((char *)&i1,sizeof(i1));
	 fio.close();
   getch();
     iss_item();
}

//-------------------PRINTING ALL BILLS IN BOX FOR MODIFYING------------------

void mdybill()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
      textcolor(6);
    gotoxy(28,4);
       cprintf("  SALES BILL     ");
    gotoxy(64,8);
     cprintf("Invoice Date");

    textcolor(3);
    gotoxy(4,6);
       cprintf("Select Bill To Modify");

    ifstream fin("bills.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 iss_item();
	}

     while(!fin.eof())
     {

      fin.read((char *)&i1,sizeof(i1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	i1.pnm();
	gotoxy(62,l);
	i1.idt(l);
      l++;
     }
 fin.close();

int cn;
cn=count(2);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   iss_item();
 }
  gotoxy(9,10);
char ch;
int C=9,R=10,y=0;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	  if(R!=9)
	   {
	     gotoxy(C,R-1);
	     R=R-1;
	   }
	 if(R==9)
	   {
	     gotoxy(9,j+8);
	     R=j+8;
	   }
	}

      if(ch=='\r')
	{
	 y=wherey();
	 y=y-9;
	 newbill(y);
	}
      if(ch=='1')
	{
	 iss_item();
	}
   }
}

//-------------------PRINTING ALL RECORDS IN BOX FOR DELETING------------------------

void dltbill()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
      textcolor(6);
    gotoxy(28,4);
       cprintf("  SALES BILL     ");
    gotoxy(64,8);
     cprintf("Invoice Date");

    textcolor(3);
    gotoxy(4,6);
       cprintf("Select Bill To Delete");

    ifstream fin("bills.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 iss_item();
	}

     while(!fin.eof())
     {
      fin.read((char *)&i1,sizeof(i1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	  cprintf(" %d",j++);
	  cprintf(".");
	gotoxy(9,l);
	  i1.pnm();
	gotoxy(62,l);
	  i1.idt(l);
       l=l+1;
     }

 fin.close();
int cn;
cn=count(2);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   iss_item();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }

      if(ch=='\r')
	{
	  y=wherey();
	  y=y-9;
	  delbill(y);
	}

      if(ch=='1')
	{
	 iss_item();
	}
   }
}

//---------------------------DELETING ONE BILL--------------------------------

void delbill(int n)
{
 clrscr();
long int a=0;
 dialog(2);
  gotoxy(32,14);
 char ch,x;
  while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(45,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(45,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(32,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(32,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==32)
	   {
	    goto con;
	   }
	  if(x==45)
	   {
	    iss_item();
	   }
       }
    }
 con:
  ifstream fin("bills.txt",ios::binary);
  ofstream fout("temp.txt",ios::binary|ios::app);
  n=n*sizeof(i1);

    while(!fin.eof())
     {
       fin.read((char *)&i1,sizeof(i1));
       if (fin.eof())
	break;
	a=fin.tellg();
	   if(n!=a)
	     fout.write((char *)&i1,sizeof(i1));
     }
	 fin.close();
	 fout.close();
	 remove("bills.txt");
	 rename("temp.txt","bills.txt");
       gotoxy(35,20);
	cout<<"BILL DELETED";
      getch();
  iss_item();
}


/*******************************************************************************
				VIEW STOCK MENU
******************************************************************************/

void v_stock()
{ clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);

    ifstream fin("records.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 menu();
	}


     while(!fin.eof())
     {

      fin.read((char *)&i1,sizeof(i1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);                 // Printing S.NO.
	cprintf(".");
	gotoxy(9,l);
	i1.name();

	gotoxy(62,l);
	i1.quty();
      l=l+1;

     }
fin.close();
int cn;

cn=count(3);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   menu();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y;

 while(1)
   {

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }

	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }
     if(ch=='1')
	{
	 menu();
	}
   }
}


/*******************************************************************************
				UPDATE STOCK MENU
*******************************************************************************/

void u_stock()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select a Product To Update");
    ifstream fin("records.txt",ios::binary);
      if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 menu();
	}
     while(!fin.eof())
      {

      fin.read((char *)&i1,sizeof(i1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);                 // Printing S.NO.
	cprintf(".");
	gotoxy(9,l);
	i1.name();

	gotoxy(62,l);
	i1.quty();
      l=l+1;

     }
fin.close();
int cn;

cn=count(3);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   menu();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y=0;

 while(1)
   {

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }

	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }

      if(ch=='\r')
	{
	  y=wherey();
	   up_rec(y-9);
	    menu();
	}
      if(ch=='1')
	{
	 menu();
	}
   }
}



/*
******************************************************************************
			   COUNTING RECORDS
******************************************************************************
*/

int count(int n)
 {
   char fnm[50];

    if(n==2)
     strcpy(fnm,"bills.txt");
       if(n==3)
	 strcpy(fnm,"records.txt");
/*	    if(n==4)
	      strcpy(fnm,"employee.txt");
     */
   ifstream f(fnm,ios::binary);
     long c=0,l;
      f.seekg( 0 , ios::end) ;
       l=f.tellg();

       /*	if(n==1)
	 c=l/sizeof(i1);
      */
	   if(n==2)
	     c=l/sizeof(i1);

	     if(n==3)
	       c=l/sizeof(i1);
       f.close();
       return c;
 }

/*
******************************************************************************
			   CONFIRMATION DIALOG BOX
******************************************************************************
*/
void dialog(int a)
 {
   clrscr();

       box(1,79,1,25,6,0);        //l,r,t,b,c,d;
       box(27,52,8,16,9,0);
       box(30,36,13,15,1,0);
       box(43,48,13,15,1,0);

      gotoxy(33,9);
       textcolor(3);
	cprintf("ARE YOU SURE");
      gotoxy(28,10);

	if(a==1)
	  cprintf(" TO MODIFY THIS BILL ?");
	if(a==2)
	  cprintf(" TO DELETE THIS BILL ?");
	if(a==3)
	  cprintf("TO MODIFY THIS RECORDS ?");
	if(a==4)
	  cprintf("TO DELETE THIS RECORDS ?");
	if(a==5)
	  cprintf("TO DELETE ALL RECORDS ?");

      gotoxy(32,14);
	textcolor(12);
	cprintf("YES");
      gotoxy(45,14);
	textcolor(15);
	cprintf("NO");
	gotoxy(32,14);
}

void dialog1(int a)
 {
   clrscr();

       box(1,79,1,25,6,0);        //l,r,t,b,c,d;
       box(27,52,8,16,9,0);
       box(34,45,13,15,1,0);
	  textcolor(3);
	 if(a==1)
	 {
	  gotoxy(32,9);
	     cprintf("NO RECORDS FOUND");
	  gotoxy(33,10);
	    cprintf("OF ENTERED DATA");
	 }

	if(a==2)
	 {
	  gotoxy(30,9);
	     cprintf("INSUFFICIENT QUANTITY");
	  gotoxy(33,10);
	     cprintf("IN STOCK");
	 }
	  gotoxy(36,14);
	   textcolor(4);
	    cprintf("CONTINUE");

      gotoxy(36,14);
}

/*
******************************************************************************
		    FUNCTIONS FOR RECORD BOX FORMAT
******************************************************************************
*/

 void recbox()
{
  clrscr();

    box(1,79,1,25,15,0);                //border BOX
    box(1,79,7,9,15,0);                // heading BOX
    box(1,7,7,23,15,0);                // SNO. BOX
    box(7,60,7,23,15,0);               // NAME BOX
    box(50,79,23,25,15,0);                //search box
//    box(1,79,23,25,15,0);               // search BOX
 textcolor(6);
     gotoxy(15,2);
       cprintf("GEETANJALI INSTITUTE OF TECHNICAL STUDIES");
     gotoxy(28,4);
       cprintf("STOCK RECORDS");
     gotoxy(2,8);
       cprintf("S.No.");
     gotoxy(25,8);
       cprintf("Particulars");
     gotoxy(52,24);
       cprintf("Search: ");
     gotoxy(66,8);
       cprintf("Quantity");
    gotoxy(7,24);
       cprintf("1. BACK TO MENU");
  textcolor(15);
     gotoxy(1,7);
       cprintf("Ì");
     gotoxy(79,7);
       cprintf("¹");             // Alt+185(¹)
     gotoxy(1,9);
       cprintf("Ì");             // Alt+204(Ì)
     gotoxy(79,9);
       cprintf("¹");
     gotoxy(1,23);
       cprintf("Ì");
     gotoxy(79,23);
       cprintf("¹");
     gotoxy(7,9);
       cprintf("Î");
   /*  gotoxy(45,9);
       cprintf("Î");  */            // Alt+206(Î)
     gotoxy(60,9);
       cprintf("Î");
     gotoxy(60,23);
       cprintf("Ê");              // Alt+202(Ê)
    gotoxy(50,25);
       cprintf("Ê");
     gotoxy(7,23);
       cprintf("Ê");
     gotoxy(7,7);
       cprintf("Ë");              // Alt+203(Ë)
    gotoxy(50,23);
       cprintf("Ë");
     gotoxy(60,7);
       cprintf("Ë");
     gotoxy(60,24);
 }

/*
******************************************************************************
		       FUNCTIONS FOR BILL FORMAT
******************************************************************************
*/

 void bill()
{
  clrscr();				      //  box(l,r,t,b,c,d);
    box(1,79,1,4,15,0);               // upper box
    box(1,39,4,8,15,0);               // comp. name box
    box(39,79,4,8,15,0);              // invoice no
    box(59,79,4,8,15,0);              // date
    box(1,79,9,11,15,0);              // heading
    box(1,79,11,25,15,0);             // main under box
    box(1,79,20,22,15,0);             // Rs. box
    box(1,79,23,25,15,0);             // Return box
    box(6,47,11,20,15,0);             // goods desc. box
    box(47,61,11,20,15,0);             // quantity box
    box(68,79,11,22,15,0);             // amount box
 textcolor(6);
     gotoxy(19,3);
       cprintf("GEETANJALI INSTITUTE OF TECHNICAL STUDIES ");
     gotoxy(32,2);
       cprintf("RETAIL INVOICE");
     gotoxy(3,5);
       cprintf("Name & Address of Consignee:");
     gotoxy(44,5);
       cprintf("Invoice No.");
     gotoxy(66,5);
       cprintf("Date:");
     gotoxy(3,21);
       cprintf("Rupees :");
     gotoxy(2,10);
       cprintf("S.No.");
     gotoxy(14,10);
       cprintf("Goods Description");
     gotoxy(49,10);
       cprintf("Quantity");
     gotoxy(63,10);
       cprintf("Rate");
     gotoxy(71,10);
       cprintf("Amount");
     gotoxy(30,24);
       cprintf("1. BACK TO MENU");
  textcolor(15);
     gotoxy(1,4);
       cprintf("Ì");
     gotoxy(1,11);
       cprintf("Ì");
     gotoxy(1,20);
       cprintf("Ì");
     gotoxy(1,8);
       cprintf("È");
     gotoxy(79,4);
       cprintf("¹");
     gotoxy(79,11);
       cprintf("¹");
     gotoxy(79,20);
       cprintf("¹");
     gotoxy(79,8);
       cprintf("¼");
     gotoxy(59,8);
       cprintf("Ê");
     gotoxy(39,8);
       cprintf("Ê");
    gotoxy(47,11);
       cprintf("Ê");
     gotoxy(6,20);
       cprintf("Ê");
    gotoxy(47,20);
       cprintf("Ê");
     gotoxy(61,20);
      cprintf("Ê");
     gotoxy(68,20);
       cprintf("Î");
     gotoxy(39,8);
       cprintf("Ê");
     gotoxy(68,22);
       cprintf("Ê");
     gotoxy(59,4);
       cprintf("Ë");
    gotoxy(47,9);
       cprintf("Ë");
    gotoxy(39,4);
       cprintf("Ë");
    gotoxy(6,9);
       cprintf("Ë");
     gotoxy(6,11);
       cprintf("Î");
     gotoxy(47,11);
       cprintf("Î");
     gotoxy(61,11);
       cprintf("Î");
     gotoxy(68,11);
       cprintf("Î");
     gotoxy(6,10);
       cprintf("º");
     gotoxy(47,10);
       cprintf("º");
     gotoxy(61,9);
       cprintf("Ë");
     gotoxy(61,10);
       cprintf("º");
     gotoxy(68,9);
       cprintf("Ë");
     gotoxy(68,10);
       cprintf("º");
     gotoxy(64,6);
	cprintf("/  /");
}

/******************************************************************************
		       FUNCTION FOR THANKS SCREEN
******************************************************************************
*/
 void thanks()
 {
   clrscr();
//      textmode(BW40);
  gotoxy(20,11);
  char th[6][10]={"THANKS","FOR","USING","THIS","SOFTWARE","!!!!"};

   for(int i=2,j=0 ; i<8 ; i++)
     {
       textcolor(i);
	cprintf(th[j++]);
	cout<<" ";
     }
  delay(1500);
    exit(0);
 }


//===========================END=OF=PROJECT=================================//

//======================PREPARED=BY=KARTIK=AGARWAL==========================//

//=======================SUPPORTED=BY=CHARU=MA'AM=============================//