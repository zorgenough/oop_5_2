#pragma once
#include "Array.h"

class OrArray : public Array
{
public:
	OrArray();
	OrArray(int);
	OrArray(double*, int);
	Array* add(Array* object) override;
	void foreach() override;
};

