#include "AndArray.h"

AndArray::AndArray() : Array() {}

AndArray::AndArray(int size) : Array(size) {}

AndArray::AndArray(double* data, int size) : Array(data, size) {}

Array* AndArray::add(Array* object)
{
    AndArray tmp(new double[size + object->getSize()], size + object->getSize());
    std::copy(data, data + size, tmp.data);
    std::copy(object->getData(), object->getData() + object->getSize(), tmp.data + size);
    std::sort(tmp.data, tmp.data + tmp.size);
    double* res = new double[tmp.size];
    int res_size = 0;

    for (int i = 0; i < tmp.size; i++)
    {
        if (tmp.data[i] == tmp.data[i + 1])
        {
            res[res_size] = tmp.data[i];
            res_size++;
            i++;
        }
    }
    Array* result = new AndArray(res, res_size);
    delete[] res;
    return result;
}

void AndArray::foreach()
{
    for (int i = 0; i < size; i++)
    {
        data[i] = sqrt(data[i]);
    }
}
