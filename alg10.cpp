#include <iostream>
#include <string>
using namespace std;
int main()
{
    string zn = "?! ,;";
    string st;
    string* w;
    int k;
    cout << "vvedi string: " << endl;
    getline(cin, st);
    w = new string[st.length() + 1];
    st += " ";
    k = 0;
    w[0] = "";
    for (int i = 0; i < st.length(); ++i)
    {
        int l = zn.find(st[i]);
        if (l < 0) { w[k] += st[i]; }
        else
        {
            if (w[k].length() > 0) { w[++k] = ""; }
            if (st[i] != ' ')
            {
                w[k] += st[i];
                w[++k] = "";
            }
        }
    }
    cout << "Words: " << endl;
    for (int i = 0; i < k; i++) cout << w[i] << endl;
    return 0;
}
