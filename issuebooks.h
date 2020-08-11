#define RETURNTIME 14

void issuebooks()
{
int t,cho,b,c;
char findbook;
int bkn;
char stunm[30];
system("cls");
printf("***ISSUE SECTION***");
printf("\n1.Issue a Book");
printf("\n2.View Issued Book");
printf("\n3.Remove issued book");
printf("\nEnter a Choice:");
scanf("%d",&cho);
switch(cho)
{
case 1:
{
system("cls");
int c=0;
char another='Y';
while(another=='Y')
{
system("cls");
printf("***Issue Book section***");
printf("\nEnter the Book Id:");
scanf("%d",&t);
fp=fopen("libraryrec.txt","rb");
fs=fopen("BookIssue.txt","ab+");
ft=fopen("userdetails.dat","rb");
if(checkid(t)==0)
{
printf("\nThe book record is available");
printf("\nThere are %d unissued books in library ",a.nobp);
printf("\nThe name of book is %s",a.name);
printf("\nEnter user name:");
scanf("%s",a.stname);
a.statuss='I';
a.issued.dd = issdate();
a.issued.mm=issmonth();
a.issued.yy=issyearr();
printf("\nIssued date=%d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
printf("\nThe BOOK of ID %d is issued",a.id);
a.duedate.dd=a.issued.dd+RETURNTIME;
a.duedate.mm=a.issued.mm;
a.duedate.yy=a.issued.yy;
if(a.duedate.dd>30)
{
a.duedate.mm+=a.duedate.dd/30;
a.duedate.dd-=30;
}
if(a.duedate.mm>12)
{
a.duedate.yy+=a.duedate.mm/12;
a.duedate.mm-=12;
}
printf("\nTo be return:%d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
fseek(fs,sizeof(a),SEEK_END);
fwrite(&a,sizeof(a),1,fs);
fclose(fs);
fclose(fp);
fclose(ft);
updating(t);
c=1;
}

if(c==0)
{
printf("\nNo record found");
}
printf("\nIssue any more(Y/N):");
another=getch();
}
break;
}
case 2:
{
system("cls");
printf("***Issued book list***\n");
printf("STUDENT NAME\tID\tBOOK NAME\tISSUED DATE\tRETURN DATE\tSTATUS\n");
fs=fopen("BookIssue.txt","rb");
while(fread(&a,sizeof(a),1,fs)==1)
{
printf("%s\t\t",a.stname);
printf("%d\t",a.id);
printf("%s\t\t",a.name);
printf("%d-%d-%d\t",a.issued.dd,a.issued.mm,a.issued.yy );
printf("%d-%d-%d\t",a.duedate.dd,a.duedate.mm,a.duedate.yy);
printf("%c\n",a.statuss);
}
fclose(fs);
if(getch()==13)
{
system("cls");
adminopt();
}
}
break;
case 3:
{
char another='Y';
while(another=='Y')
{
system("cls");
printf("***Delete Issue Book section***");
printf("\nEnter student name:");
scanf("%s",stunm);
printf("\nEnter book id:");
scanf("%d",&bkn);
fp=fopen("BookIssue.txt","rb+");
c=0;
while(fread(&a,sizeof(a),1,fp)==1)
{
if(checkid1(bkn,stunm)==0)
{
a.statuss='R';
fseek(fp,ftell(fp)-sizeof(a),0);
fwrite(&a,sizeof(a),1,fp);
fclose(fp);
printf("\nIssue removed");
c=1;
}
}
if(c==0)
{
printf("\nNo such issue was made");
}
printf("\nDelete another issue record(Y/N):");
another=getch();
}
system("cls");
adminopt();
}

default:
printf("\nWrong Entry!!");
system("pause");
issuebooks();
break;
}
system("cls");
adminopt();
}
void issuerecord()
{
printf("\nThe Book has taken by Mr. %s",a.stname);
printf("\nIssued Date:%d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
printf("\nReturning Date:%d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
}

void updating(int ide)
{
fp=fopen("libraryrec.txt","rb+");
while(fread(&a,sizeof(a),1,fp)==1)
{
if(checkid(ide)==0)
{
a.nobi=a.nobi+1;
a.nobp=a.quantity-a.nobi;
fseek(fp,ftell(fp)-sizeof(a),0);
fwrite(&a,sizeof(a),1,fp);
fclose(fp);
}
}
}
int checkid1(int t,char sttnm[30])
{
rewind(fp);
while(fread(&a,sizeof(a),1,fp)==1)
if((a.id==t)&&(strcmp(a.stname,sttnm)==0))
return 0;
return 1;
}

