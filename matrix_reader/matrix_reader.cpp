#include <iostream>  //�����������
#include <iomanip>   //�������������
#include <fstream>   //�ļ���д

using namespace std;

int main()
{
	int a,b;
	int i,j,k;//k��¼�ļ��е�����
	i=0,j=0,k=0;
	char buf[1024],c;
	char data[10][10];
	//���ļ��ж�ȡ����
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
		cout<<"��ʧ��"<<endl;
	infile.close();

	//���ļ���д������
	i=0;
	ofstream outfile;  
	outfile.open("..\\bin\\matrix2.txt"); //matrix2.txt�Ǵ�����ݵ��ļ���  
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
