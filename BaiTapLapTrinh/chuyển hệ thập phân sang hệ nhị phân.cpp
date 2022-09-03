# include <iostream>
using namespace std;
long tpsangnp(int n) {
    long m = 0;
    int rem = 1;
    int temp = 1;

    while (n != 0) {
        rem = n % 2;
        n = n / 2;
        m = m + rem * temp;
        temp = temp * 10;
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    cout << tpsangnp(n);
    return 0;
}