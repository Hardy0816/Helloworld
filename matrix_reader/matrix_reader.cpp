#include <iostream>  //数据输入输出
#include <iomanip>   //输入输出操纵器
#include <fstream>   //文件读写

using namespace std;

int main()
{
	int a,b;
	int i,j,k;//k记录文件中的行数
	i=0,j=0,k=0;
	char buf[1024],c;
	char data[10][10];
	//从文件中读取数据
	ifstream infile;
	infile.open("..\\bin\\matrix.txt");
	if(infile.is_open())
	{

		while(infile.good()&& !infile.eof())
		{
			memset(buf,0,1024);
			infile.getline(data[i],1024);
			k=i;
			i++;
		}
	}
	else
		cout<<"打开失败"<<endl;
	infile.close();

	//向文件中写入数据
	i=0;
	ofstream outfile;  
	outfile.open("..\\bin\\matrix2.txt"); //matrix2.txt是存放数据的文件名  
	if(outfile.is_open())  
	{  
		while(i<=k)
		{
		outfile<<data[i]<<endl;    
		i++;
		}	
		outfile.close();	 
	} 


	return 0;

}
