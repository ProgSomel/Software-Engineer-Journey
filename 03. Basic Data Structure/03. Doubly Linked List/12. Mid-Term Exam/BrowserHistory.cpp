#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> addresses;
    string address;
    
    cin>>address;
    while (address!="end") {
        addresses.push_back(address);
        cin>>address;
    }

    int Q;
    cin >> Q;

    string command;
    cin >> command;
    auto curr = addresses.begin();

    while (Q--) {
        if (command == "visit") {
            string address;
            cin >> address;
            bool found = false;

            for (auto it = addresses.begin(); it != addresses.end(); ++it) {
                if (*it == address) {
                    curr = it;
                    cout << *curr << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Not Available" << endl;
            }
        }

         else if (command == "next") {
            if (curr == prev(addresses.end())) {
                cout << "Not Available" << endl;
            } else {
                curr++;
                cout << *curr << endl;
            }
        } 

        
        else if (command == "prev") {
            if (curr == addresses.begin()) {
                cout << "Not Available" << endl;
            } else {
                curr--;
                cout << *curr << endl;
            }
        }

        if (Q > 0) {
            cin >> command;
        }
    }

    return 0;
}
