#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    cout << s.size() << endl;

    //! How much size that my machine can occupy for this string

    cout << s.max_size() << endl;

    //! Current capacity of the string
    string a = "efhewfdjflasjdlkjdlaskdsajhdqawhdlasdbnlakdhalkdb lkfheqdhadlqehdndakdhansdqhhd";
    cout << a.capacity() << endl;

    //! clear the string

    string h = "hello";
    cout << h << endl;
    h.clear();
    cout << h << endl;

    //! Is the string is empty or not

    string b = "hello";
    cout << b.empty() << endl;

    //! String resizing

    string res = "hello";
    cout << res.size() << endl;
    res.resize(3);
    cout << res << endl;
    res.resize(8, 'X');
    cout << res<< endl;

    return 0;
}