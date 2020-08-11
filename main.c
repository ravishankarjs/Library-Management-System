#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "dates.h"                              //TO ASSIGN ISSUE AND RETURN DATES
#include "sl.h"                                 //FOR SELECTION OF USER AND ADMIN
#include "login.h"                              //FOR LOGIN OF USER AND ADMIN
#include "signup.h"                             //TO SIGN UP FOR NEW USERS
#include "structureofbook.h"                    //FOR THE DATA MEMBERS OF BOOKS
#include "addbook.h"                            //TO ADD BOOK DATA
#include "getdata.h"                            //TO GET DATA OF BOOKS
#include "issuelistuser.h"                      //FOR THE USERS RECORD OF TAKING BOOKS
#include "viewallbooks.h"                       //TO VIEW ALL BOOKS PRESENT IN LIBRARY
#include "searchbooks.h"                        //TO SEARCH THE BOOK
#include "editbooks.h"                          //TO EDIT THE DATA OF BOOKS
#include "issuebooks.h"                         //TO ISSUE THE BOOK TO THE USER


int main(void)
{
    static int xyz=0;         //INITIALIZATION
    if(xyz==0)
    {                                                           //TO INSERT ADMIN ID AND PASSWORD ONCE
        up=fopen("userdetails.dat","ab+");
        strcpy(ue.name,"admin");
        strcpy(ue.password,"admin1");
        fwrite(&ue,sizeof(ue),1,up);
        fclose(up);
        xyz++;
    }
    while(1)
    {
    selection();                                               //CALLING FUNCTION TO SIGN IN
    system("cls");
    }
    return 0;
}
