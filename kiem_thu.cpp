#include<bits/stdc++.h>

using namespace std;
string role;
int num;

void checkBooking (string role, int num) {//1
    if(num < 0 || num > 5) {    //2
        cout << "Input không hợp lệ";//3
    } else {
        if(role == "Doctor") {//4
        cout << "Không đặt được";//5
        } else {
            if (num >= 0 && num < 5) { //6
                cout << " Đặt được"; //7
            } else {
                cout << " Không đặt được"; //8
            }
        }
    }
}

int main () {
    cin >> role >> num;
    checkBooking(role, num);


    return 0;
}
