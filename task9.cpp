#include<iostream>
#include<windows.h>
using namespace std;
void check1(string);


main(){
system("cls");
string value;
cout << "INPUT:";
cin >> value;
check1(value);
}  





void check1(string value){
if(value=="true"){
  cout << "false!";
}
if(value=="false"){
  cout << "true!";
}






}



