#include<stdio.h>
#include<conio.h>
void account();
void login();
void transaction();
void display();
void deposit();
void withdraw();
void check();
char user[50];
int pass;
char username[50];
int password;
int r,rup,rrup,bal,pin,p;
void main()
{
int n;
while(n!=5)
{
clrscr();
gotoxy(27,2);   // It set the position of cursor on console screen
printf("---------------------------- \n");
gotoxy(27,3);
printf("___BANK MANAGEMENT SYSTEM___");
gotoxy(27,4);
printf("---------------------------- \n");
printf("\n\n 1. CREATE AN ACCOUNT \n 2. LOGIN \n 3. TRANSACTION \n 4. DISPLAY \n 5. EXIT \n");
printf("\n Enter the choice:");
scanf("%d",&n);
switch(n)
{
case 1:
account();
break;
case 2:
login();
break;
case 3:
transaction();
break;
case 4:
display();
break;
case 5:
system("cls");
gotoxy(35,12);
printf("Thank You!");
break;
default:
printf("\n Invalid choice");
getch();
}
}
getch();
}
struct student
{
char fname[10],lname[10];
char add[20],ac[20];
int date,month,year;
}u1;
void account()
{
system("cls");  // Clear the screen of previous execution [clrscr();]
gotoxy(30,2);
printf("----------------- \n");
gotoxy(30,3);
printf("CREATE AN ACCOUNT");
gotoxy(30,4);
printf("----------------- \n");
printf("\n First name:");
scanf("%s",u1.fname);
printf("\n Last name:");
scanf("%s",u1.lname);
printf("\n Date of birth (DD MM YYYY):");
scanf("%d %d %d",&u1.date,&u1.month,&u1.year);
printf("\n Account type:");
scanf("%s",u1.ac);
printf("\n Address:");
scanf("%s",u1.add);
printf("\n Enter the Username [ONLY CHARACTERS]:");
scanf("%s",&user);
printf("\n Enter the Password [ONLY NUMBERS]:");
scanf("%d",&pass);
printf("\n Generate your transaction PIN number:");
scanf("%d",&pin);
system("cls");
gotoxy(27,12);
printf("ACCOUNT CREATED SUCCESSFULLY");
getch();
r=rand();    // It create random number
}
void transaction()
{
int n;
system("cls");
gotoxy(32,2);
printf("------------ \n");
gotoxy(32,3);
printf("TRANSACTIONS");
gotoxy(32,4);
printf("------------ \n");
printf("Enter the PIN:");
scanf("%d",&p);
if(pin!=p)
{
printf("\n\t Wrong PIN Number");
}
else
{
system("cls");
gotoxy(30,2);
printf("---------------------- \n");
gotoxy(30,3);
printf("WELCOME TO ATM MACHINE");
gotoxy(30,4);
printf("---------------------- \n");
printf("\n 1. DEPOSIT \n 2. WITHDRAW \n 3. CHECK BALANCE \n 4. BACK \n");
while(n!=4)
{
printf("\n Enter the choice:");
scanf("%d",&n);
switch(n)
{
case 1:
deposit();
break;
case 2:
withdraw();
break;
case 3:
check();
break;
case 4:
printf("\n Thanks!");
break;
default:
printf("\n Invalid choice \n");
}
}
}
getch();
}
void deposit()
{
printf("\n Enter the amount to Deposit:");
scanf("%d",&rup);
bal=bal+rup;
}
void withdraw()
{
printf("\n Enter the amount to Withdraw:");
scanf("%d",&rrup);
if(bal>=rrup)
{
printf("\n\t WITHDRAW SUCCESSFUL \n");
bal=bal-rrup;
}
else
{
printf("\n\t NOT SUFFICIENT AMOUNT \n");
}
}
void check()
{
printf("\n Your balance is: %d \n",bal);
}
void login()
{
int n;
system("cls");
gotoxy(32,2);
printf("------------- \n");
gotoxy(32,3);
printf("____LOGIN____");
gotoxy(32,4);
printf("------------- \n");
printf("\n Username:");
scanf("%s",&username);
printf("\n Password:");
scanf("%d",&password);
if(strcmp(user,username)!=0 || pass!=password)
{
printf("\n\t Wrong Username or Password");
}
else
{
system("cls");
printf("--------------- \n");
printf("ACCOUNT DETAILS \n");
printf("--------------- \n");
gotoxy(1,5);
printf("A/c no: %d",r);
gotoxy(27,5);
printf("A/c Holder name: %s %s",u1.fname,u1.lname);
gotoxy(63,5);
printf("A/c Type: %s",u1.ac);
printf("\n\n\n DO YOU WANT TO MAKE TRANSACTIONS [PRESS 1]:");
scanf("%d",&n);
if(n==1)
{
transaction();
}
else
{
return;
}
}
getch();
}
void display()
{
if(r==NULL)
{
system("cls");
gotoxy(28,12);
printf("Don't have an account");
}
else
{
system("cls");
gotoxy(30,2);
printf("--------------- \n");
gotoxy(30,3);
printf("ACCOUNT DETAILS");
gotoxy(30,4);
printf("--------------- \n");
gotoxy(1,6);
printf("A/c no: %d",r);
gotoxy(27,6);
printf("A/c Holder name: %s %s",u1.fname,u1.lname);
gotoxy(63,6);
printf("A/c Type: %s",u1.ac);
gotoxy(1,8);
printf("D.O.B.: %d/%d/%d",u1.date,u1.month,u1.year);
gotoxy(27,8);
printf("Address: %s",u1.add);
gotoxy(63,8);
printf("Username: %s",user);
}
getch();
}
