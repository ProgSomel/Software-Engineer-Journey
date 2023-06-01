#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min_number = min(a, min(b, c));
    int max_number = max(a, max(b, c));
    cout << min_number <<" "<< max_number<< endl;
    return 0;
}