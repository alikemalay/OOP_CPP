/*****************************************
* Matrix.cpp *
*****************************************
* IDE : Visual Studio 2013 *
* Author : Ali Kemal AY *
* Experiment 2: Introduction to C++ - II *
*****************************************/
#include "Matrix.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void Matrix_Allocate(Matrix& matrix, int rowSize, int columnSize)
{
	matrix.rowSize = rowSize;
	matrix.columnSize = columnSize;
	
	matrix.data = new float*[rowSize];
	int i;
	for (i = 0; i < matrix.rowSize; i++)
	{
		matrix.data[i] = new float[matrix.columnSize];
	}

}
void Matrix_Free(Matrix& matrix)
{
	int i;
	for (i = 0; i < matrix.rowSize; i++)
	{
		delete[] matrix.data[i];
	}
	delete[] matrix.data; 
	matrix.data = nullptr; 
	matrix.columnSize = -1;
	matrix.rowSize = -1;

}
void Matrix_FillByValue(Matrix& matrix, float value)
{
	int i, j;
	matrix.data = new float*[matrix.rowSize];

	for (i = 0; i < matrix.rowSize; i++)
	{
		matrix.data[i] = new float[matrix.columnSize];
	}

	for (int i = 0; i < matrix.rowSize; i++)
	{
		for (int j = 0; j < matrix.columnSize; j++)
		{
			matrix.data[i][j] = value;
		}
	}
}
void Matrix_FillByData(Matrix & matrix, float ** data)
{
	int i, j;
	matrix.data = new float*[matrix.rowSize];

	for (i = 0; i < matrix.rowSize; i++)
	{
		matrix.data[i] = new float[matrix.columnSize];
	}

	for (int i = 0; i < matrix.rowSize; i++)
	{
		for (int j = 0; j < matrix.columnSize; j++)
		{
			matrix.data[i][j] = data[i][j];
		}
	}
}
void Matrix_Display(const Matrix& matrix)
{
	int i, j;
	cout << "MATRIX:" << matrix.rowSize << "x" << matrix.columnSize << "\n";

	for (i = 0; i < matrix.rowSize; i++)
	{
		for (j = 0; j < matrix.columnSize; j++)
		{
			cout <<	setw(10) << matrix.data[i][j] ;
		}
		cout << endl;
	}
}
void Matrix_Addition(const Matrix & matrix_left, const Matrix & matrix_right, Matrix &result)
{
	int i, j;
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);

	
	for (int i = 0; i < result.rowSize; i++)
	{
		for (int j = 0; j < result.columnSize; j++)
		{
			result.data[i][j] = matrix_left.data[i][j] + matrix_right.data[i][j];
		}
	}
}
void Matrix_Substruction(const Matrix & matrix_left, const Matrix & matrix_right, Matrix & result)
{
	int i, j;
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);
	

	for (int i = 0; i < result.rowSize; i++)
	{
		for (int j = 0; j < result.columnSize; j++)
		{
			result.data[i][j] = matrix_left.data[i][j] - matrix_right.data[i][j];
		}
	}
}
void Matrix_Multiplication(const Matrix & matrix_left, const Matrix & matrix_right, Matrix & result)
{
	int i, j,k,sum=0;
	Matrix_Allocate(result, matrix_left.rowSize, matrix_right.columnSize);
	
	for (i = 0; i < matrix_left.rowSize; i++)
	{
		for (k = 0; k < matrix_right.columnSize; k++)
		{
			for (j = 0; j < matrix_left.columnSize; j++)
			{
				 sum+= matrix_left.data[i][j] * matrix_right.data[j][k];
			}
			result.data[i][k] = sum;
			sum = 0;
		}
	}
}
void Matrix_Multiplication(const Matrix & matrix_left, float scalarValue, Matrix & result)
{
	int i, j;
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);
	for (i = 0; i < matrix_left.rowSize; i++)
	{
		for (j = 0; j < matrix_left.columnSize; j++)
		{
			result.data[i][j] = matrix_left.data[i][j] * scalarValue;
		}
	}
}

void Matrix_Transpose(const Matrix& matrix, Matrix& result)
{
	int i, j;
	Matrix_Allocate(result, matrix.columnSize, matrix.rowSize);
	for (i = 0; i < matrix.rowSize; i++)
	{
		for (j = 0; j < matrix.columnSize; j++)
		{
			result.data[j][i] = matrix.data[i][j];
		}
	}
}

void Matrix_Normalize(const Matrix& matrix, Matrix& result)
{
	float modul=0.0;

	int i, j;

	Matrix_Allocate(result, matrix.rowSize, matrix.columnSize);

	for (i = 0; i < matrix.rowSize; i++)
	{
		for (j = 0; j < matrix.columnSize; j++)
		{
			 modul+=pow(matrix.data[i][j],2);
		}
	}
	modul = sqrt(modul);
	Matrix_Division(matrix, modul, result);					
}

void Matrix_Division(const Matrix & matrix_left, float scalarValue, Matrix & result)
{
	int i, j;
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);
	
	for (i = 0; i < matrix_left.rowSize; i++)
	{
		for (j = 0; j < matrix_left.columnSize; j++)
		{
			result.data[i][j] = matrix_left.data[i][j] / scalarValue;
		}
	}
}



