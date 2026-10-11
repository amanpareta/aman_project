#include <iostream>
using namespace std;

class Array {
public:
    int arr[10];

    void accept() {
        cout << "Enter 10 numbers: ";
        for(int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for(int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a;
    a.accept();
    a.display();
    return 0;
}
