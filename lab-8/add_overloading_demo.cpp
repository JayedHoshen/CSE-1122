#include <iostream>
using namespace std;

void add(int i, int j);
void add(int i, double j);
void add(int i, int j, int k);

int main(void)
{
    int    A = 1, B = 2, C = 3;
    double D = 1.1;

    add(A, B); //  1 + 2 => add prints 3
    add(A, D); //  1 + 1.1 => add prints 2.1
    add(A, B, C); // 1 + 2 + 3 => add prints 6
}

void add(int i, int j)
{
    cout << "Result: " << i + j << endl;
}
void add(int i, double j)
{
    cout << "Result: " << i + j << endl;
}
void add(int i, int j, int k)
{
    cout << "Result: " << i + j + k << endl;
}
