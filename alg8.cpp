#include <iostream>
#include <string>
using namespace std;
int main()
{
	string* name, * list;
	string tmp;
	float* sum, * ch;
	int n, k, l, j;
	cout << "n = ";
	cin >> n;
	name = new string[n];
	list = new string[n];
	sum = new float[n];
	ch = new float[n];
	cout << "Vvedi spisok: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		name[i] = tmp;
		cout << "Vvedi character: ";
		cin >> ch[i];
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
			sum[k] = ch[i];
			k++;
		}
		else
		{
			sum[l] += ch[i];
		}
	}
	cout << "Spisok bes povtorenii s character-koi: \n\n";
	for (int i = 0; i < k; i++) { cout << list[i] << ": " << " sum - " << sum[i] << endl; }
}
