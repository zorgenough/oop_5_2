#pragma once

#include <iostream>
#include <string>
#include <algorithm>

class Array
{
protected:
	int size;
	double* data;
public:
	Array();
	Array(int);
	Array(double*, int);
	~Array();

	void recreate(int);
	void recreate(double*, int);

	int getSize();
	double* getData();
	void setSize(int);
	void setData(double*);

	virtual Array* add(Array* object) = 0;
	virtual void foreach() = 0;
	virtual std::string print();
	virtual void input();

	void toSet();
};

