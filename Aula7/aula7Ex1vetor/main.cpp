/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 08:26
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#define DIM 5

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"portuguese");
    
    int vetor[DIM] = {10, 15, 20, 25, 30};
    int vetorl[]  = {10, 20, 30, 40, 60, -1};
    int i;
    cout << "vetor com tamanho pré definido com define"<< endl;
    for(i=0; i <DIM; i++){
    cout << "vetor na posição"<< i<<" = "<<vetor[i]<< endl;
    }
    
     for(i=0; vetorl[i] >0; i++){
    cout << "vetor na posição"<< i<<" = "<<vetorl[i]<< endl;
    }
    return 0;
}

