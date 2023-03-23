#pragma once
#include "Array.h"

class AndArray : public Array
{
public:
	AndArray();
	AndArray(int);
	AndArray(double*, int);
	Array* add(Array* object) override;
	void foreach() override;
};