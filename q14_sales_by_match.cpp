#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
   
    set<int>set1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int element = ar[i];
            if (set1.find(element)!= set1.end()) 
            {
                set1.erase(element);
                count++;

            } else {
                set1.insert(element);
            }

        }
        return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

   int n,b;
   cin>>n;
   vector<int>ar;
   for(int i=0;i<n;i++)
   {
       cin>>b;
       ar.push_back(b);
   }

    int result = sockMerchant(n, ar);

    cout << result << "\n";

return 0;
}
