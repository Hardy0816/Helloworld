//------------------ maxdll.cpp ----------------  
//ע��˴��ĺ궨����Ҫд��#include "maxdll.h"֮ǰ  
//�������dll��Ŀ�ڲ�ʹ��__declspec(dllexport)����  
//��dll��Ŀ�ⲿʹ��ʱ����__declspec(dllimport)����  
#define DLL_IMPLEMENT  

#include "maxdll.h"  
#include <Windows.h>  
#include <intrin.h>  
#include <stdlib.h>  
#include <string.h>  
  
double DLL_API Max(double x, double y)  
{  
	if(x>y)
		return x;
	else
		return y;
}  
