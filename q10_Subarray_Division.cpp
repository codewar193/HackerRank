#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{
    int result = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < m; j++)
        {
            count = count + s[i + j];
        }

        if (count == d)
        {
            result += 1;
        }
    }
    return result;
}

int main()
{
    int d, m, n,b;
    vector<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
          cin>>b;
        s.push_back(b) ;
    }
      

    cin >> d >> m;

    int result = birthday(s, d, m);

    cout << result << "\n";

    return 0;
}
