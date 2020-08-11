void viewallbooks(char uoa,char cc[30])
{
int total=0;
system("cls");
printf("NOBI-No. of books issued\nNOBR-No. of books remaining\n");
printf("*********************************Book List*****************************");
printf("\n CATEGORY\tID\tBOOK NAME\tAUTHOR\t\tQTY\tPRICE\tRackNo\tNOBI\tNOBR\n ");
fp=fopen("libraryrec.txt","rb");
while(fread(&a,sizeof(a),1,fp)==1)
{
printf("%s\t",a.cat);
printf("%d\t",a.id);
printf("%s\t\t",a.name);
printf("%s\t",a.Author);
printf("%d\t",a.quantity);
printf("%.2f\t",a.Price);
printf("%d\t",a.rackno);
printf("%d\t",a.nobi);
printf("%d",a.nobp);
printf("\n\n");
total=total+a.quantity;
}
printf("\nTotal Books =%d",total);
fclose(fp);
printf("Print Enter to go to main menu");
if(getch()==13)
{
    if(uoa=='u')
    {
        system("cls");
        useropt(cc);
    }
    if(uoa=='a')
    {
        system("cls");
        adminopt();
    }
}
}

