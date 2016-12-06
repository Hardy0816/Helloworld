#include <iostream>  //数据输入输出
#include <iomanip>   //输入输出操纵器
#include <fstream>   //文件读写
#include <string>    //字符串操作
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
	//从文件中读取数据
	ifstream infile;
	infile.open("..\\bin\\matrix.txt");

	ofstream outfile; 
	outfile.open("..\\bin\\matrix2.txt"); //matrix2.txt是存放数据的文件名 

	if(infile.is_open()&&outfile.is_open())
	{
		infile.getline(buf,1024);
		outfile<<buf<<endl;
		dim_number=atoi(&buf[4]);//确认矩阵大小
		//创建动态二维数值
		matrix_data = new int*[dim_number] ;  
		matrix2_data = new int*[dim_number] ; 
        for( k = 0 ; k < dim_number ; k ++ )
		{
			matrix_data[k] = new int[dim_number];
			matrix2_data[k] = new int[dim_number]; 
		}
		//读取数据并存储
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
		//矩阵乘法
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

		//释放动态数组
		for (int i=0; i<dim_number; ++i)
		{
			 delete matrix_data[i];
			 delete matrix2_data[i];
		}
		delete[] matrix_data; 
		delete[] matrix2_data;
	}
	else
		cout<<"打开失败"<<endl;
	infile.close();
	outfile.close();
	return 0;

}
