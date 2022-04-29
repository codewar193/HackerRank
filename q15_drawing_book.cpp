#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {

int min;
min=(n/2)-(p/2);
if(min>p/2)
min=p/2;
  
  
  return min;


}

int main()
{
    int n,p;
    cout<<" The number of pages and the page to turn to :"<<endl;
    cin>>n>>p;
   
   int result = pageCount(n, p);

    cout << result << "\n";
    return 0;
}

