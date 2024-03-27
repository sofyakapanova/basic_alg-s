#include <iostream>
#include <string>
using namespace std;
int main()
{
	string* name, * list;
	string tmp;
	int* reit;
	int n, k, l, t, j;
	cout << "n = ";
	cin >> n;
	name = new string[n];
	list = new string[n];
	reit = new int[n];
	cout << "Vvedi spisok: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		name[i] = tmp;
	}
	k = 0;
	for (int i = 0; i < n; i++)
	{
		l = -1;
		j = 0;
		while ((l == -1) && (j < n))
		{
			if (list[j] == name[i]) { l = j; }
			j++;
		}
		if (l == -1)
		{
			list[k] = name[i];
			reit[k] = 1;
			k++;
		}
		else
		{
			reit[l]++;
		}
	}
	cout << "Spisok bes povtorenii s reitingom : \n";
	for (int i = 0; i < k; i++) { cout << list[i] << ":  reit: " << reit[i] << endl; }
}
