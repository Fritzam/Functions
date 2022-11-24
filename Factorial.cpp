#include <iostream>

using namespace std;

int main() {
    int silnia = 1;
    int n;
    cout << "Prosze podac liczbe silni: " << endl;
    cin >> n;
    for (n; n > 1; n--) {
        silnia *= n;
    }
    cout << "Silnia wynosi: " << silnia << endl;

    return 0;
}