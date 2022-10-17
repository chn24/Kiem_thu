#include<bits/stdc++.h>

using namespace std;
string role;
int num;

int main () {
    cin >> role >> num;
    if(num < 0 || num > 5) {
        cout << "Input không hợp lệ";
    } else {
        if(role == "Doctor") {
        cout << "Không đặt được";
        } else {
            if (num >= 0 && num < 5) {
                cout << " Đặt được";
            } else {
                cout << " Không đặt được";
            }
        }
    }


    return 0;
}
