int issdate()
{
    time_t currt;
    time (&currt);
    struct tm *local = localtime(&currt);
    int dayyy;
    dayyy=local->tm_mday;
    return dayyy;
}
int issmonth()
{
    time_t currt;
    time (&currt);
    struct tm *local = localtime(&currt);
    int monthh;
    monthh= local->tm_mon + 1;
    return monthh;
}
int issyearr()
{
    time_t currt;
    time (&currt);
    struct tm *local = localtime(&currt);
    int yearr;
    yearr=local->tm_year + 1900;
    return yearr;
}
