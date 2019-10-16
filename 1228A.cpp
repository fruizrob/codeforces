#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r; cin >> l >> r;
    bool exits = false;
    while(l <= r) {
        int num = l;
        bool flag = true;
        vector<bool> digits(10, false);
        
        while(num) {
            int digit = num%10;

            if(digits[digit] == true) {
                flag = false;
                break;
            }

            digits[digit] = true;
            num /= 10;
        }

        if(flag) {
            cout << l << endl;
            exits = true;
            break;
        }
        l++;
    }

    if(!exits) {
        cout << -1 << endl;
    }
    
    return 0;
}