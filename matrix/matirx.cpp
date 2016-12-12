#include <iostream>
#include "matrix.h"
#include <iomanip>   //�������������
#include <fstream>   //�ļ���д
#include <string>    //�ַ�������
using namespace std;

void Matrix::file_address_get()//���ļ�
{

}

void Matrix::file_content_get()//��ȡ�ļ�����
{
    ifstream infile;
	infile.open("..\\bin\\matrix.txt");
	infile.getline(buf,1024);
	dim_number=atoi(&buf[4]);//ȷ�Ͼ����С
	//������̬��ά��ֵ
	matrix_data = new int*[dim_number] ;  
    for(int k = 0 ; k < dim_number ; k ++ )
	{
		matrix_data[k] = new int[dim_number];
	}
	//��ȡ���ݲ��洢
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
void Matrix::data_progress()//����˷�
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
		//�ͷŶ�̬����
	for (int i=0; i<dim_number; ++i)
	{
			delete matrix_data[i];
	}
	delete[] matrix_data; 

}
void Matrix::data_output()//�������
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
		//�ͷŶ�̬����
	for (int i=0; i<dim_number; ++i)
	{
			delete matrix2_data[i];
	}
	delete[] matrix2_data;
	outfile.close();
}