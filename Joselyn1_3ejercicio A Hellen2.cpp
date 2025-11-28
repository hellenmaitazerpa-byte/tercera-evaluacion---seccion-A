//realiza un programa que permita al usuario ingresar un numero entre 1 y 9999, y se muestre graficado en pantalla. use la funcion gotoxy

#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y = y;  
    SetConsoleCursorPosition(hcon, dwPos);  
}

void dibujaUno(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        gotoxy(x + n/2, y + i);
        cout << "*";
    }
}

void dibujaDos(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || 
               (j == n - 1 && i <= n / 2) || 
               (j == 0 && i >= n / 2)) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaTres(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || j == n - 1) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaCuatro(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1 || i == n / 2 || (j == 0 && i <= n / 2)) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaCinco(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || 
               (j == 0 && i <= n / 2) || 
               (j == n - 1 && i >= n / 2)) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaSeis(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || j == 0 || 
               (j == n - 1 && i >= n / 2)) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaSiete(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        gotoxy(x + (n - 1), y + i);
        cout << "*";
    }
    for (int j = 0; j < n; j++) {
        gotoxy(x + j, y);
        cout << "*";
    }
}

void dibujaOcho(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || j == 0 || j == n - 1) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void dibujaNueve(int y, int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || j == n - 1 || 
               (j == 0 && i <= n / 2)) {
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

int main() { 
    int numero;
    cout << "Ingrese un número del 1 al 9: ";
    cin >> numero;

    switch (numero) {
        case 1: dibujaUno(0, 5, 5); break;
        case 2: dibujaDos(0, 5, 5); break;
        case 3: dibujaTres(0, 5, 5); break;
        case 4: dibujaCuatro(0, 5, 5); break;
        case 5: dibujaCinco(0, 5, 5); break;
        case 6: dibujaSeis(0, 5, 5); break;
        case 7: dibujaSiete(0, 5, 5); break;
        case 8: dibujaOcho(0, 5, 5); break;
        case 9: dibujaNueve(0, 5, 5); break;
        default: cout << "Número no válido" << endl; break;
    }

    return 0;
}


