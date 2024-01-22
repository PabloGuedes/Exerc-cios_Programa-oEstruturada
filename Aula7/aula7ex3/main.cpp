/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 08:48
 */


#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int vetorl[5];
    int i;
    
    for (i=0; i<5; i++){
        cout<< "digite o numero" <<endl;
        cin>>vetorl[i];
    }
      for (i=0; i<5; i++){
        cout<< "o numero é"<<vetorl[i] <<endl;
       
    }
    return 0;
}
