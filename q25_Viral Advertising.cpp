#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int viralAdvertising(int n) {
int tl_pl=0,ft_day=5;

for (int i=0;i<n;i++)
{
    tl_pl+=floor(ft_day/2);
    ft_day=3*floor(ft_day/2);
}

return tl_pl;
}

int main()
{
   int n;
   cin>>n;

    int result = viralAdvertising(n);

    cout << result << "\n";


    return 0;
}


