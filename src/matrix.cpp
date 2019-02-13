#include<iostream>
#include"matrix.h"

namespace mayur{

    Matrix::Matrix(int i, int j){
	    row = i;
	    column = j;
    }

    Matrix::Matrix(){

    }

    //accept matrix
    void Matrix::getMatrix(){
        int i,j;

        for(i=0;i<row;i+=1){
            for(j=0;j<column; j+=1){
                std::cout<<"\nEnter the element no "<<i+1<<" "<<j+1<<".  ";
                std::cin>>matrix[i][j];
            }
        }
    }

    // display method
    void Matrix::displayMatrix(){
        int i,j;

        for(i=0;i<row;i+=1){
            for(j=0;j<column; j+=1){
                std::cout<<matrix[i][j]<<" ";
            }
        std::cout<<"\n";
        }
    }

    //addition method
    Matrix operator+(Matrix X, Matrix Y){

        Matrix Z(X.row, X.column);
        int i, j;
        
        if(X.row==Y.row && X.column==Z.column){

            for(i=0;i<X.row;i+=1){
                for(j=0;j<X.column; j+=1){
                    Z.matrix[i][j] = X.matrix[i][j] + Y.matrix[i][j];
                }
            }
        }
        else{
            std::cout<<"Invalid Operation.\n";
        }

        return Z;
        
    }

    Matrix operator-(Matrix X, Matrix Y){

        Matrix Z(X.row, X.column);
        int i, j;

        if(X.row==Y.row && X.column==Y.column){

            for(i=0;i<X.row;i+=1){
                for(j=0;j<X.column; j+=1){
                    Z.matrix[i][j] = X.matrix[i][j] - Y.matrix[i][j];
                }
            }
        }
        else{
            std::cout<<"Invalid Operation.\n";
        }
        

        return Z;
    }

    Matrix operator*(Matrix X, Matrix Y){
       
        Matrix Z(X.row, Y.column);
        int i, j, k;

        for(i=0;i<X.row;i+=1){
            for(j=0;j<Y.column; j+=1){
                for(k=0; k<X.column; k+=1){
                Z.matrix[i][j] += X.matrix[i][k] * Y.matrix[k][j];
                }
            }
        }

        return Z;
    }

}