#include<iostream>
#include<windows.h>
using namespace std;




main(){
system("cls");
int holidays,days,minperworkingday,minperholiday,norm;
cout << "Enter number of holidays: ";
cin >> holidays;
days=365-holidays;
minperworkingday=days*63;
minperholiday=holidays*127;
norm=30000-(minperworkingday+minperholiday);
cout << "Minutes for Tom to sleep well is: "<<norm;

}  



