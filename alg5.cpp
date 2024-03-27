#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string* name;
	string contrl;
	int start, finish, mid, n;
	int l = -1;
	cout << "Vvedi n: ";
	cin >> n;
	name = new string[n];
	cout << "Vvedi spisok: ";
	for (int i = 0; i < n; i++)
	{
		cin >> name[i];
	}
	cout << "Vvedi iskomoe slovo: ";
	cin >> contrl;
	start = 0;
	finish = n - 1;
	while ((l == -1) && (start <= finish))
	{
		mid = (start + finish) / 2;
		if (name[mid] == contrl) { l = mid; }
		if (name[mid] <= contrl) { start = mid + 1; }
		if (name[mid] >= contrl) { finish = mid - 1; }
	}
	cout << "Number of iskomoe name: " << l << endl;
}
