void signup()
{
    char sp[100];
    fflush(stdin);
    printf("\nEnter new Username: ");
    fflush(stdin);
    gets(sp);
    fflush(stdin);


rewind(up);
while(fread(&ue,sizeof(ue),1,up)==1)
{
if(strcmp(ue.name,sp)==0)
{
    printf("\nUsername already exists\a");
system("pause");
signup();
}
}

strcpy(ue.name,sp);
printf("\nEnter the password: ");
scanf("%s",ue.password);
fseek(up,0,SEEK_END);
    fwrite(&ue,sizeof(ue),1,up);
    fclose(up);
    printf("\nSuccessfully signed up!");
    system("pause");
    selection();

}
