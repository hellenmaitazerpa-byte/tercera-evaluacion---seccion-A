// realice un programa que muestre en pantalla un rectangulo sin relleño(solo los bordes) y a dentro salga el año de tu nacimiento.

#include <iostream>
 #include <windows.h> 
  #include <stdio.h>  
using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 void dibujados( int x,int y, int n ){
	for( int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		if( i==0|| i==n-1||i==n/2||(j==n-1 && i<=n/2)||(j==0 && i>=n/2)){
			gotoxy(x+j, y+i);cout<<"*";
	}	
	}
}
}

void dibuja0(int x, int y,int n){
	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	if( i==0|| i==n-1||j==0||j==n-1){
	 gotoxy(x+j,y+i);cout<<"*";
	}
	}
	}
}

void dibujacero(int x, int y,int n){
	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	if( i==0|| i==n-1||j==0||j==n-1){
	 gotoxy(x+j,y+i);cout<<"*";
	}
	}
	}
}

void dibuja6(int x, int y,int n){
	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	if (i == 0 || i == n - 1 || i == n / 2 || j == 0 || (j == n - 1 && i >= n / 2)) {
	 gotoxy(x+j,y+i);cout<<"*";
	}
	}
	}
}

  int main() {
  	dibujados(0,5,5);

  char calcular;
  
 do{
     

  system("cls");
  int ancho, alto;
  cout<<"ingrese el ancho del rectangulo:";
  cin>> ancho;
  
  cout<<"ingrese el alto del rectangulo:";
  cin>> alto;
  
  system("cls");
  
  
 for(int i=1; i<=ancho; i++){ //le quite un +
gotoxy (i,1);
cout<<"#";
gotoxy (i,alto);
cout<<"#";
}

for(int j=1; j<=alto; j++){
gotoxy (1,j);
cout<<"#";
gotoxy(ancho,j);
cout<<"#";
}
int poX=(ancho/2)-2;
int poY=alto/2;
gotoxy(poX,poY);
 
 
 dibujados(10,5,5);       
 dibuja0(20,5,5);
 dibujacero(30,5,5);
 dibuja6(40,5,5);

cout<<"desea general otro rectangulo (s/n):";
cin>>calcular;
}while(calcular=='S'|| calcular=='s');
 


    return 0;
}


