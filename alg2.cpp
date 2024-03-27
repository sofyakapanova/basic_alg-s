#include <iostream>
using namespace std;
int main()
{
    int n, min, l;int* a;
    cout << "Vvedi razmer massiva: ";
    cin >> n;
    a = new int[n];
    cout << "Vvedi elements for a: ";
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    min = a[0];
    l = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            l = i;
        }
    }
    cout << "min= " << min << endl;
    cout << "his number:" << l << endl;
}
