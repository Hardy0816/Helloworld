#include <iostream>
#include "../maxdll/maxdll.h"

int main()
{
	double x = 3.0;
	double y = 5.0;
	// ����dll��ĺ���Max
	double z = Max(x, y);

	std::cout<< "Max value of x and y is " << z << std::endl;
	return 0;
}