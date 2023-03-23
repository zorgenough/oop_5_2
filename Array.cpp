#include "Array.h"

Array::Array()
{
	size = 0;
	data = nullptr;
}

Array::Array(int size)
{
	this->size = size;
	data = new double[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

Array::Array(double* data, int size)
{
	this->size = size;
	this->data = new double[size];
	for (int i = 0; i < size; i++)
	{
		this->data[i] = data[i];
	}
}

Array::~Array()
{
	delete [] data;
}

void Array::recreate(int size)
{
	if (data)
	{
		delete[] data;
	}
	this->size = size;
	data = new double[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

void Array::recreate(double* data, int size)
{
	if (this->data)
	{
		delete[] this->data;
	}
	this->size = size;
	this->data = new double[size];
	for (int i = 0; i < size; i++)
	{
		this->data[i] = data[i];
	}
}

int Array::getSize()
{
	return size;
}

double* Array::getData()
{
	return data;
}

void Array::setSize(int size)
{
	this->size = size;
}

void Array::setData(double* data)
{
	for (int i = 0; i < size; i++)
	{
		this->data[i] = data[i];
	}
}

std::string Array::print()
{
	std::string str;
	for (int i = 0; i < size; i++)
	{
		str += std::to_string(data[i]) + " ";
	}
	return str;
}

void Array::input()
{
	std::cin >> size;
	recreate(size);
	for (int i = 0; i < size; i++)
	{
		std::cin >> data[i];
	}
}

void Array::toSet()
{
	std::sort(data, data + size);
	double* res = new double[size];
	*res = *data;
	int res_size = 1;
	for (int i = 1; i < size; i++)
	{
		if (data[i] != data[i - 1])
		{
			res[res_size] = data[i];
			res_size++;
		}
	}
	delete[] data;
	size = res_size;
	data = new double[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = res[i];
	}
	delete[] res;
}
