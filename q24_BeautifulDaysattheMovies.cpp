#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */

int beautifulDays(int i, int j, int k) {
int count=0,n;

for(int start=i;start<=j;start++)
{
 n=start;

 int reverse=0, rem; 
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;   
     
  }   

    if(abs(start-reverse)%k==0 || abs(start-reverse)==0)
    {
        count++;
    }
}
return count;
}

int main()
{
    

 int i,j,k;
 cin>>i>>j>>k;
    int result = beautifulDays(i, j, k);

    cout << result << "\n";


    return 0;
}

