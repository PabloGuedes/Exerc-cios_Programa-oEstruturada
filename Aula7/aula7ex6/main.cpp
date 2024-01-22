/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 09:11
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int tamanho = 30;
    float notas[tamanho],media = 0.0;
    int i=0,j;
    
    do{
        cout<<"digite a nota do aluno"<< (i+1)<<endl;
        cin>> notas[i];
    }while (notas[i++] >=0);
        
        i--;
    for(j=0; j<i; j++){
        media += notas[j];
    }
    cout << "media notas"<<(media/i)<<endl;
    return 0;
}

