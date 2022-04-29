#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a)
{

    string check;
    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (count >= k)
    {
        check = "NO";
    }
    else
    {
        check = "YES";
    }

    return check;
}

int main()
{
    int t, n, k, a_item;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++)
    {

        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a_item;
            a.push_back(a_item);
        }

        string result = angryProfessor(k, a);

        cout << result << "\n";
    }

    return 0;
}
