#include<iostream>
#include<windows.h>
using namespace std;
void calculation(int,int,int);


main(){
system("cls");
int whiteroses,redroses,tulips;
cout << "Number of Red roses: ";
cin >>redroses;
cout << "Number of White roses: ";
cin >> whiteroses;
cout << "Number of Tulips: ";
cin >> tulips;
calculation(redroses,whiteroses,tulips);
}  



void calculation(int redroses,int whiteroses,int tulips){
float total,discount;
  total=(redroses*2)+(whiteroses*4.10)+(tulips*2.50);
  cout << "Original amount: "<<total<<endl;
if(total>=200){
  discount=(total/100)*20;
  total=total-discount;
  cout << "Price after Discount: "<<total;
}

}



