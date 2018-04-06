#include<iostream>
#include"Vektor_dec.h"

using namespace std;

int main() {

	Vektor_dec d;
	for (unsigned i = 0; i < 100; i++)
	{
		d.push_back(i);
	}
	d.insert(13, 4);
	cout << d.size() << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << endl;
	}
	return 0;
}