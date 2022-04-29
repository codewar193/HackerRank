#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hurdleRace' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY height
 */

int hurdleRace(int k, vector<int> height) {

int max=0,f=0,temp;
for(int i=0;i<height.size();i++)
{
    int temp=height[i]-k;
    if(max<temp)
    {
        max=temp;
        f=1;
    }
}
if (f==0) {
max=0;
}
return max;
}

int main()
{
    
   int n,k;
   cin>>n>>k;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        int height_temp = height[i];
       height.push_back(height_temp);
     
    }

    int result = hurdleRace(k, height);

    cout << result << "\n";

    return 0;
}


