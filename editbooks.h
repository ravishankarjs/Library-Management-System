void editbooks(void)
{
system("cls");
int c=0;
int d,e;
printf("****Edit Books Section****");
char another='y';
while(another=='y')
{
system("cls");
printf("\nEnter Book Id to be edited:");
scanf("%d",&d);
fp=fopen("libraryrec.txt","rb+");
while(fread(&a,sizeof(a),1,fp)==1)
{
if(checkid(d)==0)
{
printf("\nThe book is availble");
printf("\nThe Book ID:%d",a.id);
printf("\nEnter new name:");scanf("%s",a.name);
printf("\nEnter new Author:");scanf("%s",a.Author);
printf("\nEnter new quantity:");scanf("%d",&a.quantity);
printf("\nEnter new price:");scanf("%f",&a.Price);
printf("\nEnter new rackno:");scanf("%d",&a.rackno);
a.nobi=0;
a.nobp=a.quantity;
printf("\nThe record is modified");
fseek(fp,ftell(fp)-sizeof(a),0);
fwrite(&a,sizeof(a),1,fp);
fclose(fp);
c=1;
}
if(c==0)
{
printf("\nNo record found");
}
}
printf("\nModify another Record?(Y/N)");
another=getch() ;
}
system("cls");
adminopt();
}

