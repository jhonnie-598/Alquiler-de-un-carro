#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    
    char temporada;
    int contador_dias, numero_de_dias;
    float total, valor_del_dia;
    
    cout<< "Ingrese el valor del d�a";
    cin>> valor_del_dia;
    
    cout << "Ingrese el numero de d�as";
    cin >> numero_de_dias;
    
    if(numero_de_dias<= 0){
        cout << "El numero de dias ingresado es incorrecto";
    }
    else {
        if(numero_de_dias>=1 && numero_de_dias<=5){
        total = valor_del_dia * numero_de_dias * 0.90;
        }
        else{ 
            if (numero_de_dias>5){
            contador_dias = numero_de_dias - 5;
            total = contador_dias * valor_del_dia * 0.80;
            total = total + ( 5* valor_del_dia * 0.90);
        }
    }
}
    cout << "Ingrese la temporada en la que se encuentra verano = v, invierno = i, oto�o = o, primavera = p";
    cin >> temporada;
    
    
    switch(temporada){
        case 'v': {
            total = total * 1.20;
            cout << "La temporada en la que se encuentra es verano y debe pagar un total de: $"<<total;
        }break;
        case 'i': {
            total = total * 0.80;
            cout << "La temporada en la que se encuentra es invierno y debe pagar un total de: $"<<total;
        }break;
        case 'o': {
            cout << "La temporada en la que se encuentra es oto�o y debe pagar un total de: $"<<total;
        }break;
        case 'p': {
            cout << "La temporada en la que se encuentra es primavera y debe pagar un total de: $"<<total;
        }break;
        default: cout << "Valor ingresado en la temporada es incorrecto";
        
        
    }
    return 0;
    
}


 
