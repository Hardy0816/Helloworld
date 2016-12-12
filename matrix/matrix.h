#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix
{
private:
	int **matrix_data,**matrix2_data;
	int dim_number;
	char buf[1024];
	char data[10][10];
public:
	void file_address_get();
	void file_content_get();
	void data_progress();
	void data_output();
};


#endif