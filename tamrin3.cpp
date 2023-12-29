#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int h,m,s,sec,k;
    cout<<"saniye ra vared konid : ";
    cin>>sec;
    h=sec/3600;
    k=sec%3600;
    m=k/60;
    s=k%60;
    cout<<h<<"saat"<<","<<m<<"daghighe"<<","<<s<<"saniye";
    getch();
}
