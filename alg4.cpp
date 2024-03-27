#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, l, k;
	string* name;
	string contrl;
	string tmp;
	cout << "Vvedi n: ";
	cin >> n;
	name = new string[n];
	cout << "Vvedi spisok: ";
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		name[i] = tmp;
	}
	cout << " Vvedi iskomoe nazvanie: ";
	cin >> tmp;
	contrl = tmp;
	l = -1;
	int i = 0;
	while ((l == -1) && (i < n))
	{
		if (name[i] == contrl) { l = i; }
		i++;
	}
	cout << "iscomoe nazvanie nashli pod nomerom: " << l << endl;
}
