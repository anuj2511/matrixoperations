#include<iostream>
#include"matrix.h"

int main(){

    std::cout<<"Entered Main.\n";

    mayur::Matrix A(3,2);
    A.getMatrix();

    mayur::Matrix B(2,3);
    B.getMatrix();

    mayur::Matrix C, D, E;
    
    //C = A + B ;
    //D = A - B ;
    E = A * B ;

    //std::cout<<"addition: \n";
    //C.displayMatrix();

    //std::cout<<"\nsubtraction \n";
    //D.displayMatrix();

    std::cout<<"\nmultiplication : \n";
    E.displayMatrix();
    
    return 0;
}