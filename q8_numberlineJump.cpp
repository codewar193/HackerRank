#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2)
{
    int flag=0;
    int d1=v1+x1;
    int d2=v2+x2;
     if(d1==d2)
      flag=1;
      
    for(int i=0;flag==0&& d1<=d2;i++)
    {
        d1 += v1;
        d2 += v2;
        
        if (d1 == d2) {
            flag = 1;
            break;
        }
    }  
      if (flag==1)
         return "YES";
      else {
      return "NO";
      }   
      
     
}

int main()
{
   

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";

  

    return 0;
}

