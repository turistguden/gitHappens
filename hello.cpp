#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int y = 0;
    
    while (x > 1) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = 3 * x + 1;
        }
        y++;

        cout << y << ":\t" << x << endl;
    }
	return 0;
}
