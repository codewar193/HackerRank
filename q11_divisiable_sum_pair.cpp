#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
int count=0;
for(int i=0;i<n;i++)
{
    int sum=0;
    for(int j=i;j<n-1;j++)
    {
        sum=ar[j+1]+ar[i];
        if(sum%k==0)
        {
            count++;
        }
        
    }
}
return count;

}

int main()
{
  int  n,k,b;
    vector<int> ar;
    cin >> n>>k;
    for (int i = 0; i < n; i++)
    {
          cin>>b;
        ar.push_back(b) ;
    }
      


    int result = divisibleSumPairs(n, k, ar);

    cout <<"result= "<< result << "\n";


    return 0;
}

