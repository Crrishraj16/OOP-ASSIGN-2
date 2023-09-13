#include <iostream>
using namespace std;

class Swap {
private:
    int num1;
    int num2;

public:
    Swap(int n1, int n2)
    {
        num1=n1;
        num2=n2;
    }

    // Friend function to swap the numbers
    friend void swapNumbers(Swap& ns);

    void displayNumbers() {
        cout << "Numbers before swapping: " << num1 << " " << num2 << endl;
    }
};

// Friend function definition to swap the numbers
void swapNumbers(Swap& ns) {
    // Swapping the numbers using a temporary variable
    int temp = ns.num1;
    ns.num1 = ns.num2;
    ns.num2 = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Swap ns(num1, num2);

    ns.displayNumbers();

    swapNumbers(ns);

    ns.displayNumbers();

    return 0;
}
