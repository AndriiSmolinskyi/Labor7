#include <iostream>
using namespace std;

int result;
void aver(int a, int b, int c);


int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    aver(a, b, c);


}

void aver(int a, int b, int c)
{
    result = (a + b + c) / 3;
    cout << result;

}