#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {

int height=1;
  for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    height *= 2;
                else
                    height++;
            }
return height;
}


 int main() {
    int t,i;
    cin>>t;
    while ( i>t) 
    {
        for (int i = 0; i < t; i++)
         {
            int n;
            cin>>n;

        int result = utopianTree(n); 
        cout << result << "\n";
         }
         i--;
    }

    return 0;
}

