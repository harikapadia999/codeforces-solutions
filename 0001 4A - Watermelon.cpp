#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
/*
We start by reading the input integer w from the user using the cin function.

Next, we check if the weight of the watermelon is even and greater than 2. If it is, then we print "YES", which means that the boys can divide the watermelon into two parts, each of them weighing even number of kilos. Otherwise, we print "NO", which means that the boys cannot divide the watermelon in the way they want.

The condition w % 2 == 0 checks if the weight of the watermelon is even, and the condition w > 2 checks if the weight is greater than 2. If both conditions are true, we print "YES". Otherwise, we print "NO".

Note that we need to make sure that each part has a positive weight, so we cannot divide the watermelon into two parts of 1 and w - 1 kilos.
*/
