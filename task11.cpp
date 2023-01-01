#include<iostream>
#include<windows.h>
using namespace std;
void speed2(int);


main(){
system("cls");
int speed1;
cout << "Enter your speed:";
cin >> speed1;
speed2(speed1);

}


void speed2(int speed1){
if(speed1<=100){
   cout << "Perfect! You are going good.";
}
if(speed1>100){
   cout << "Halt...You will be challenged!";
}


}  



