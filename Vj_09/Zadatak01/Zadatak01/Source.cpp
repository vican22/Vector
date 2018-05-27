#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

using namespace std;
int get_rnd(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void load(vector<int>& v) {
	for (unsigned i = 0; i < 10; i++)
	{
		int n = get_rnd(1, 100);
		v.push_back(n);
	}
}

void print(vector<int>& v)
{
	for (unsigned i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;
}
int main()
{
	srand(time(nullptr));
	vector<int> v;
	load(v);
	print(v);

	make_heap(v.begin(), v.end());
	print(v);

	bool dalje;
	do
	{
		int broj;
		cout << "Broj: ";
		cin >> broj;
		v.push_back(broj);
		push_heap(v.begin(), v.end());

		cout << "Dalje (1/0): ";
		cin >> dalje;
	} while (dalje);

	print(v);

	while (!v.empty())
	{
		cout << v.front() << " - ";
		pop_heap(v.begin(), v.end());
		v.pop_back();
		print(v);
		
	}
	return 0;
}