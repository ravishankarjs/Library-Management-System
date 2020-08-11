void addbooks()
{
    system("cls");
    int s;
    printf("\t ***Select Category*** ");
    printf("\n1.Electronics\n2.Computer\n3.Communication\n4.Mechanical\n5.Civil");
    printf("\nEnter your choice:");
    scanf("%d",&s);
    system("cls");
    fp=fopen("libraryrec.txt","ab+");
    if(getdata(s)==1)
    {
    a.cat=catagories[s-1];
    fseek(fp,0,SEEK_END);
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
    printf("\nThe record is sucessfully saved");
    printf("Save any more?(Y / N):");
    }
    if(getch()=='N')
    {
    system("cls");
    adminopt();
    }
    else
    {
    system("cls");
    addbooks();
    }


}
