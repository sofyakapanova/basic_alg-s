#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string* w;
    int k;
    cout << "vvedi string: ";
    getline(cin, str);
    w = new string[str.length()];
    k = 0;
    str = str + " ";
    while (str.length() > 0)
    {
        int l = str.find(" ");
        if (l > 0) { w[k++] = str.substr(0, l); }
        str.erase(0, l + 1);
    }
    cout << "Words of string: " << endl;
    for (int i = 0; i < k; i++) { cout << w[i] << endl; }
    return 0;
}
