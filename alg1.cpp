#include <iostream>
using namespace std;
int main()
{
    int N, sum; int* A;
    cout << "vvedi kol-vo: ";
    cin >> N;
    A = new int[N];
    cout << "vvedi chisla: ";
    for (int i = 0; i < N; i++) cin >> A[i];
    sum = 0;
    for (int i = 0; i < N; i++) sum += A[i];
    cout << "Summa = " << sum << endl;
    return 0;
}
