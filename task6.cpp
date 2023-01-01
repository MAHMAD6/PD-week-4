#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}
void a();
void w();
void ab();
void I();
void S();
main(){
system("cls");
a();
w();
ab();
I();
S();
gotoxy(50,50);



}
void a(){
 gotoxy(40,1);
 cout << "  ##";
 gotoxy(40,2);
 cout << " #  #";
 gotoxy(40,3);
 cout << " ####";
 gotoxy(40,4);
 cout << " #  #";
 gotoxy(40,5);
 cout << "##  ##";
}
 void w(){
 gotoxy(40,7);
 cout << "#     #";
 gotoxy(40,8);
 cout << "#     #";
 gotoxy(40,9);
 cout << "#  #  #";
 gotoxy(40,10);
 cout << "# # # #";
 gotoxy(40,11);
 cout << "#     #";
}
void ab(){
 gotoxy(40,13);
 cout << "  ##";
 gotoxy(40,14);
 cout << " #  #";
 gotoxy(40,15);
 cout << " ####";
 gotoxy(40,16);
 cout << " #  #";
 gotoxy(40,17);
 cout << "##  ##";
}
 void I(){
 gotoxy(40,19);
 cout << "#####";
 gotoxy(40,20);
 cout << "  #";
 gotoxy(40,21);
 cout << "  #";
 gotoxy(40,22);
 cout << "  #";
 gotoxy(40,23);
 cout << "#####";
}
 void S(){
 gotoxy(40,25);
 cout << "######";
 gotoxy(40,26);
 cout << "#  ";
 gotoxy(40,27);
 cout << "##### ";
 gotoxy(40,28);
 cout << "    #";
 gotoxy(40,29);
 cout << "#####";
}
