int getdata(int s)
{
int t;
printf("\nEnter the Information Below");
printf("\nCategory:");
printf("%s",catagories[s-1]);
printf("\nBook ID:\t");
scanf("%d",&t);
if(checkid(t) == 0)
{
printf("\nThe book id already exists\a");
getch();
adminopt();
return 0;
}
a.id=t;
printf("\nBook Name:");
scanf("%s",a.name);
printf("\nAuthor:");
scanf("%s",a.Author);
printf("\nQuantity:");
scanf("%d",&a.quantity);
printf("\nPrice:");
scanf("%f",&a.Price);
printf("\nRack No:");
scanf("%d",&a.rackno);
a.nobi=0;
a.nobp=a.quantity;
return 1;
}

int checkid(int t)
{
rewind(fp);
while(fread(&a,sizeof(a),1,fp)==1)
if(a.id==t)
return 0;
return 1;
}


