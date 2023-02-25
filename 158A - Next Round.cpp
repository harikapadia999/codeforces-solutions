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
/*
Explanation:
Read the inputs n, k and scores from the user.
Initialize a count variable to 0, which will be used to count the number of participants who advance to the next round.
Find the score of the k-th place finisher using the index k-1 and store it in k_score.
Iterate through the list of scores using a loop and check if the score of each participant is greater than or equal to k_score and is also positive.
If the condition in step 4 is satisfied, increment the count variable.
After the loop, output the value of count, which represents the number of participants who will advance to the next round.
*/

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
