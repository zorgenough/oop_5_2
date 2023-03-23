#include "OrArray.h"

OrArray::OrArray() : Array() {}

OrArray::OrArray(int size) : Array(size) {}

OrArray::OrArray(double* data, int size) : Array(data, size) {}

Array* OrArray::add(Array* object) {
    Array* result = new OrArray(new double[size + object->getSize()], size + object->getSize());
    std::copy(data, data + size, result->getData());
    std::copy(object->getData(), object->getData() + object->getSize(), result->getData() + size);
    result->toSet();
    return result;
}

void OrArray::foreach()
{
    for (int i = 0; i < size; i++)
    {
        data[i] = log(data[i]);
    }
}