#include<iostream>
#include"matrix.h"

int main(){

    std::cout<<"Entered Main.\n";

    mayur::Matrix A(3,3);
    A.getMatrix();

    mayur::Matrix B(3,3);
    B.getMatrix();

    mayur::Matrix C(3,3), D(3,3), E(3,3);
    
    C = A + B ;
    D = A - B ;
    E = A * B ;

    C.displayMatrix();
    D.displayMatrix();
    E.displayMatrix();
    
    return 0;
}