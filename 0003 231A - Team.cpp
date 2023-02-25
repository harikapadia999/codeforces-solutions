#include <iostream>
using namespace std;
int main ()
{
  int n,p,v,t,sum{0};
  cin>>n;
  while(n--){
      cin>>p>>v>>t;
      if(p+v+t >=2)
      sum+=1;
  }
  cout<<sum<<endl;
  return 0;
}

or
  
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

/*
Explanation:
We first read in the number of problems n from the input. We then declare a variable count to keep track of the number of problems that the friends will implement, initially set to zero.

We then iterate through each problem using a for loop. For each problem, we read in the views of Petya, Vasya, and Tonya from the input. We then check if at least two friends are sure about the solution, by adding up their views and checking if the sum is greater than or equal to 2. If so, we increment the count variable.

Finally, we print out the count variable, which gives us the number of problems that the friends will implement.

This solution has a time complexity of O(n), where n is the number of problems.
*/


