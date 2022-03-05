#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int convertFive(int n);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
    return 0;
}

/*you are required to complete this method*/
int convertFive(int n) {
    if (n == 0){
        return 5;
    }
    int ld = n%10;
    if (ld == 0){
        ld = 5;
    }
    return convertFive(n/10)*10+ld;
}