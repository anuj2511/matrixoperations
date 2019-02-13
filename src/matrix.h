#ifndef MATRIX_H
#define MATRIX_H

namespace mayur{

    class Matrix{
     	private :
		float matrix[10][10];
		int row, column;
	
	public :
		Matrix(int,int);
		Matrix();
		
        void getMatrix();
		void displayMatrix(); 
		
        Matrix operator+(Matrix);
		Matrix operator-(Matrix);
		Matrix operator*(Matrix);
    
    };
}

#endif
