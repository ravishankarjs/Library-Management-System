struct Date
{
int mm,dd,yy;
};
struct books
{
int id;
char stname[20];
char name[20];
char Author[20];
int quantity;
int nobi;
int nobp;
float Price;
char statuss;
int count;
int rackno;
char *cat;
struct Date issued;
struct Date duedate;
};
struct books a;
FILE *fp,*ft,*fs;
char catagories[][15]={"Electronics","Computer","Communication","Mechanical","Civil"};

