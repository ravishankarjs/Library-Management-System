struct users
{
    char name[30],password[10];

}ue;
FILE *up;
void login(){
int uc;
char a1[100],p[100];
up=fopen("userdetails.dat","ab+");
printf("\nUsername : ");
scanf("%s",a1);
fflush(stdin);
printf("\nPassword : ");
scanf("%s",p);
fflush(stdin);
rewind(up);
while(fread(&ue,sizeof(ue),1,up)==1)
if(strcmp(ue.name,a1)==0)
{
if(strcmp(ue.password,p)==0)
{
system("cls");
printf("\nHI...\n");

                    if(strcmp(ue.name,"admin")==0)
                        adminopt();
                    else
                        useropt(ue.name);
}
else
{
printf("\nWrong password");
system("pause");
login();
}
}
}
