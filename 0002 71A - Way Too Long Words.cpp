#include <iostream>
using namespace std;
int main ()
{
  int n;
  string s;
  cin>>n;
  while(n--){
      cin>>s;
      if(s.length() > 10)
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
      else
        cout<<s<<endl;
  }
  return 0;
}


or
  
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            string abbreviation = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
            cout << abbreviation << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}


/*
Explanation:

First, we read in the number of words to process.
For each word, we read it in as a string.
If the word is too long (i.e., its length is greater than 10), we create an abbreviation by taking the first letter of the word, the number of letters between the first and last letters (which is the length of the word minus 2), and the last letter of the word. We use the to_string function to convert the length to a string so that we can concatenate it with the other letters. We then print the abbreviation to the console.
If the word is not too long, we simply print it to the console without making any changes.
Overall, this solution reads in each word, determines whether it is too long, and either prints the word itself or its abbreviation to the console, depending on its length.
*/
