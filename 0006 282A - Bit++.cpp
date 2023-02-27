#include<iostream>
using namespace std;
int main(){
    int n=0,res=0;
    string operation;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>operation;
        if(operation[0]=='+' || operation[2] == '+')res++;
        else res--;
    }
    cout<<res;
    return 0;
}

or 
  
 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x(0);
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}
