/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 09:33
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int tamanho = 5;
    float notas[tamanho],media = 0.0;
    int i=0,j;
    cout<<setprecision(2);
    do{
        if(i>= tamanho){
            cout<< "buffer lotado"<<endl;
            i++;
            break;
        }
        cout<<"digite a nota do aluno"<< (i+1)<<endl;
        cin>> notas[i];
    }while (notas[i++] >=0);
        
        i--;
    for(j=0; j<i; j++){
        media += notas[j];
    }
    cout << "media notas"<<(media/tamanho)<<endl;
    return 0;
}

