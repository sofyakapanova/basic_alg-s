#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, k; string tmp; string* name, * best;
	cout << "Vvedi n: ";
	cin >> n;
	name = new string[n];
	best = new string[n];
	cout << "Vvedi spisok: ";
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		name[i] = tmp;
	}
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (name[i][0] == 'a')
		{
			best[k] = name[i];
			k++;
		}
	}
	cout << "spisok horoshih: " << endl;
	for (int i = 0; i < n; i++) { cout << best[i] << endl; }
}
