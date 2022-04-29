#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {

int max= 1 ;
int most_freq=1;

for(int j=2;j<6;j++)
{
    int count=0;
    for( int i=0;i<arr.size();i++)
    {
        if(arr[i]==j)
        {
            count++;
        }
    }
    if(max<count)
    {
        max=count;
        most_freq=j;
    }
}
return most_freq;


}

int main()
{
    int  n,b;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
          cin>>b;
        arr.push_back(b) ;
    }

    int result = migratoryBirds(arr);

    cout << result << "\n";

    return 0;
}

