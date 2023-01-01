#include<iostream>
#include<windows.h>
using namespace std;
void discount(int,string);

main(){
system("cls");
while(true){
 int price;
 string country;
 cout << "Enter Country name:";
 cin >> country;
 cout << "Ticket price in dollars($):";
 cin >> price;
 discount(price,country);
}
}



void discount(int price,string country){
if(country=="pakistan"){
  int discount;
  discount=(price/100)*5;
  price=price-discount;
  cout << "Ticket Price:"<<price<<endl ;
}
if(country=="Ireland"){
  int discount;
  discount=(price/100)*10;
  price=price-discount;
  cout << "Ticket Price:"<<price<<endl ;
} 
if(country=="India"){
  int discount;
  discount=(price/100)*20;
  price=price-discount;
  cout << "Ticket Price:"<<price<<endl ;
} 
if(country=="England"){
  int discount;
  discount=(price/100)*30;
  price=price-discount;
  cout << "Ticket Price:"<<price<<endl ;
} 
if(country=="Canada"){
  int discount;
  discount=(price/100)*45;
  price=price-discount;
  cout << "Ticket Price:"<<price<<endl ;
}  
}


 



