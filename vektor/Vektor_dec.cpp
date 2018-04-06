#include "Vektor_dec.h"



Vektor_dec::Vektor_dec()
{
	values = new double[cap];
}


Vektor_dec::~Vektor_dec()
{
	if (values != nullptr)
	{
		delete[] values;
	}
}



double Vektor_dec::at(int i)
{
	return values[i];
}

unsigned Vektor_dec::size()
{
	return next;
}

void Vektor_dec::push_back(double value)
{
	if (cap == next)
	{
		grow();
	}
	values[next++] = value;
}

void Vektor_dec::insert(double value, int position)
{
	
	push_back(0);

	for (int i = next - 1; i > position; --i)
	{
		values[i] = values[i - 1];
	}

	values[position] = value;
}



void Vektor_dec::grow()
{
	cap += cap * 1.33;
	double *new_values = new double[cap];

	for (int i = 0; i < next; i++)
	{
		new_values[i] = values[i];
	}
	delete[] values;
	values = new_values;
}
