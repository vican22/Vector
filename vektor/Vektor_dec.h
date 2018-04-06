#pragma once


class Vektor_dec
{
public:
	Vektor_dec();
	~Vektor_dec();
	double at(int i);
	unsigned size();
	void push_back(double value);
	void insert(double value, int position);
private:
	unsigned cap = 4;
	unsigned next = 0;
	double *values = nullptr;
	void grow();
};

