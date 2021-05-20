#include <iostream>

using namespace std;
int n, k, fact1, fact2, fact3, number1, number2, number3, nTakeAwayK, nChooseK;

void CalculateNChooseK();

int main()
{
    cout << "Enter a row number for Pascal's Triangle: ";
    cin >> n;
    int x = 1;
    for (k = 1; k <= n + 1; k++)
    {
        cout << x << '\t';
        CalculateNChooseK();
        x = nChooseK;

    }
    cout << endl;
    system("PAUSE");
    return 0;
}

void CalculateNChooseK()
{
    fact1 = 1;
    for (number1 = 1; number1 <= n; number1++)
    {
        fact1 = (fact1 * number1);
    }

    fact2 = 1;
    for (number2 = 1; number2 <= k; number2++)
    {
        fact2 = (fact2 * number2);
    }

    nTakeAwayK = (n - k);
    fact3 = 1;
    for (number3 = 1; number3 <= nTakeAwayK; number3++)
    {
        fact3 = (fact3 * number3);
    }

    nChooseK = fact1 / (fact2 * fact3);
}
