#include <iostream>
#include "matrix.h"
#include <iomanip>   //输入输出操纵器
#include <fstream>   //文件读写
#include <string>    //字符串操作
using namespace std;

void Matrix::file_address_get()//打开文件
{

}

void Matrix::file_content_get()//读取文件矩阵
{
    ifstream infile;
	infile.open("..\\bin\\matrix.txt");
	infile.getline(buf,1024);
	dim_number=atoi(&buf[4]);//确认矩阵大小
	//创建动态二维数值
	matrix_data = new int*[dim_number] ;  
    for(int k = 0 ; k < dim_number ; k ++ )
	{
		matrix_data[k] = new int[dim_number];
	}
	//读取数据并存储
	for(int i=0;i<dim_number;i++)
	{
		memset(buf,0,1024);
		infile.getline(data[i],1024);
		for(int j=0;j<dim_number;j++)
		{
			matrix_data[i][j]=atoi(&data[i][j*2]);
		}
	}
	infile.close();
}
void Matrix::data_progress()//矩阵乘法
{
	Matrix::file_content_get();
	matrix2_data = new int*[dim_number] ; 
	for(int k = 0 ; k < dim_number ; k ++ )
	{
		matrix2_data[k] = new int[dim_number];
	}
	for(int i=0;i<dim_number;i++)
	{
		for(int j=0;j<dim_number;j++)
		{
			matrix2_data[i][j]=0;
			for(int k=0;k<dim_number;k++)
			{
				matrix2_data[i][j] += matrix_data[i][k] * matrix_data[k][j];
			}
		}
	}
		//释放动态数组
	for (int i=0; i<dim_number; ++i)
	{
			delete matrix_data[i];
	}
	delete[] matrix_data; 

}
void Matrix::data_output()//数据输出
{
	Matrix::data_progress();
	ofstream outfile;
	outfile.open("..\\bin\\matrix2.txt"); 
	for(int i=0;i<dim_number;i++)
	{
		for(int j=0;j<dim_number;j++)
		{
			outfile<<matrix2_data[i][j]<<" ";
		}
		outfile<<endl;
	}
		//释放动态数组
	for (int i=0; i<dim_number; ++i)
	{
			delete matrix2_data[i];
	}
	delete[] matrix2_data;
	outfile.close();
}