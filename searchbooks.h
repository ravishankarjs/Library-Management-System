void searchbooks(char uoa,char bb[30])
{
char findbook;
system("cls");
int d;
printf("***Search Books***");
printf("\n1. Search By ID");
printf("\n2. Search By Name");
printf("\nEnter Your Choice");
fp=fopen("libraryrec.txt","rb+");
rewind(fp);
switch(getch())
{
case '1':
{
system("cls");
printf("\n****Search Books By Id****");
printf("\nEnter the book id:");
scanf("%d",&d);
printf("\nSearching........");
while(fread(&a,sizeof(a),1,fp)==1)
{
if(a.id==d)
{
printf("\nThe Book is available");
printf("\n");
printf("\nID:%d",a.id);
printf("\nName:%s",a.name);
printf("\nAuthor:%s ",a.Author);
printf("\nQuantity:%d ",a.quantity);
printf("\nPrice:Rs.%.2f",a.Price);
printf("\nRack No:%d ",a.rackno);
printf("\nNo. of books issued:%d",a.nobi);
printf("\nNo. of books present:%d",a.nobp);
findbook='t';
}
}
if(findbook!='t')
{
printf("\nNo Record Found");
}
printf("\nTry another search?(Y/N)");
if(getch()=='Y')
searchbooks(uoa,bb);
else
{
    if(uoa=='u')
    {
        system("cls");
        useropt(bb);
    }
    if(uoa=='a')
    {
        system("cls");
        adminopt();
    }
}
break;
}
case '2':
{
char s[15];
system("cls");
printf("****Search Books By Name****");
printf("\nEnter Book Name:");
scanf("%s",s);
int d=0;
while(fread(&a,sizeof(a),1,fp)==1)
{
if(strcmp(a.name,(s))==0)
{
printf("\nThe Book is available");
printf("\nID:%d",a.id);
printf("\nName:%s",a.name);
printf("\nAuthor:%s",a.Author);
printf("\nQuantity:%d",a.quantity);
printf("\nPrice:Rs.%.2f",a.Price);
printf("\nRack No:%d ",a.rackno);
d++;
}
}
if(d==0)
{
printf("\nNo Record Found");
}
printf("\nTry another search?(Y/N)");
if(getch()=='Y')
searchbooks(uoa,bb);
else
{
    if(uoa=='u')
    {
        system("cls");
        useropt(bb);
    }
    if(uoa=='a')
    {
        system("cls");
        adminopt();
    }
}
break;
}
default :
getch();
searchbooks(uoa,bb);
}
fclose(fp);
}

