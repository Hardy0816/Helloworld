#include <iostream>  //�����������
#include <iomanip>   //�������������
#include <fstream>   //�ļ���д
#include <string>    //�ַ�������
using namespace std;

int main()
{
	int a,b;
	int i,j,k;
	i=0,j=0,k=0;
	int **matrix_data,**matrix2_data;

	int dim_number=0;
	char buf[1024];
	char data[10][10]={};
	//���ļ��ж�ȡ����
	ifstream infile;
	infile.open("..\\bin\\matrix.txt");

	ofstream outfile; 
	outfile.open("..\\bin\\matrix2.txt"); //matrix2.txt�Ǵ�����ݵ��ļ��� 

	if(infile.is_open()&&outfile.is_open())
	{
		infile.getline(buf,1024);
		outfile<<buf<<endl;
		dim_number=atoi(&buf[4]);//ȷ�Ͼ����С
		//������̬��ά��ֵ
		matrix_data = new int*[dim_number] ;  
		matrix2_data = new int*[dim_number] ; 
        for( k = 0 ; k < dim_number ; k ++ )
		{
			matrix_data[k] = new int[dim_number];
			matrix2_data[k] = new int[dim_number]; 
		}
		//��ȡ���ݲ��洢
		while(infile.good()&& !infile.eof())
		{
			memset(buf,0,1024);
			infile.getline(data[i],1024);
			for(j=0;j<dim_number;j++)
			{
				matrix_data[i][j]=atoi(&data[i][j*2]);
			}
			i++;
		}
		//����˷�
		for(i=0;i<dim_number;i++)
		{
			for(j=0;j<dim_number;j++)
			{
				matrix2_data[i][j]=0;
				for(k=0;k<dim_number;k++)
				{
					matrix2_data[i][j] += matrix_data[i][k] * matrix_data[k][j];
				}
				outfile<<matrix2_data[i][j]<<" ";
			}
			outfile<<endl;
		}

		//�ͷŶ�̬����
		for (int i=0; i<dim_number; ++i)
		{
			 delete matrix_data[i];
			 delete matrix2_data[i];
		}
		delete[] matrix_data; 
		delete[] matrix2_data;
	}
	else
		cout<<"��ʧ��"<<endl;
	infile.close();
	outfile.close();
	return 0;

}
