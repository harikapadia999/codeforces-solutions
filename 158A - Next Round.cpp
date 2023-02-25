#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int count = 0;
    int k_score = scores[k-1];
    for (int i = 0; i < n; i++) {
        if (scores[i] >= k_score && scores[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


or 
  
  
#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}  
