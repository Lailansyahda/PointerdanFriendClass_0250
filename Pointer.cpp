#include <iostream>
using namespace std;

int main()
{
    // dereferences
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;
    c = &y;
}