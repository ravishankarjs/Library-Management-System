void issueuserlist(char mn[30])
{
system("cls");
printf("***%s's Issued book list***\n",mn);
printf("STUDENT NAME\tID\tBOOK NAME\tISSUED DATE\tRETURN DATE\tSTATUS\n");
fs=fopen("BookIssue.txt","rb");
while(fread(&a,sizeof(a),1,fs)==1)
{
if(strcmp(a.stname,mn)==0)
{
printf("%s\t\t",a.stname);
printf("%d\t",a.id);
printf("%s\t\t",a.name);
printf("%d-%d-%d\t",a.issued.dd,a.issued.mm,a.issued.yy );
printf("%d-%d-%d\t",a.duedate.dd,a.duedate.mm,a.duedate.yy);
printf("%c\n",a.statuss);
}
}
fclose(fs);
if(getch()==13)
{
system("cls");
useropt(mn);
}
}

