

void selection()                                             //TO SIGN IN
{
    system("cls");
    char b[10];
    printf("\t**WELCOME TO LIBRARY MANAGEMENT SYSTEM**");

    int choice;
    printf("\n\n\t  1.Login\n\t  2.Sign Up\n\tEnter your choice : ");
    scanf("%d",&choice);
    if(choice == 1)                                         //IF CHOICE IS 1 THEN USER IS TO LOG IN ELSE SIGN UP
    {
        system("cls");
        login();

    }
    else if(choice == 2)
    {
        system("cls");
        signup();
    }
    else
    {
        printf("\nInvalid Input");
        system("pause");
        selection();
    }



}

void adminopt()                                                   //FOR ADMINS TO SELECT THEIR OPERATIONS
{
    system("cls");
    printf("HI ADMIN...");
    char uoa='a';
    int n;
    printf("\n1.Add books\n2.Issue books\n3.View all books\n4.Edit books\n5.Search books\n6.Return to main page\nEnter option:");
    do
    {
        scanf("%d",&n);
    switch(n)
    {
        case 1:addbooks();break;
        case 2:issuebooks();break;
        case 3:viewallbooks(uoa);break;
        case 4:editbooks();break;
        case 5:searchbooks(uoa);break;
        case 6:printf("\nExiting to main menu");system("pause");main();break;
        default:printf("Enter number between 1 to 6 only ");

    }
    }while((n>6)||(n<1));

}
void useropt(char name1[30])                                                          //FOR USERS TO SELECT THEIR OPERATIONS
{
    system("cls");
    printf("\nHI %s...\n",name1);
    char uoa='u';
    int n;
    printf("\n1.Search books\n2.View all books\n3.Book taken details\n4.Return to main page\nEnter option:");
    do
    {
    scanf("%d",&n);
    switch(n)
    {
        case 1:searchbooks(uoa,name1);break;
        case 2:viewallbooks(uoa,name1);break;
        case 3:issueuserlist(name1);
        case 4:printf("\nExiting to main menu");system("pause");main();break;
        default:printf("Enter number between 1 to 4 only ");
    }
    }while((n>3)||(n<1));
}
