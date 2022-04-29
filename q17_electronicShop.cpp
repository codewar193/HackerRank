#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
     int key_val,drive_val,budget,flag=0;
     
     
     for(int i=0;i<keyboards.size();i++)
     {
         for(int j=0;j<drives.size();j++)
         {
             int temp=keyboards[i]+drives[j];
             
             if(budget<temp && temp<=b)
             {
                 budget=temp;
                 flag=1;
             }
         }
     }
     
     if (flag==0) {
     return -1;
     }
     
     return budget;

}

int main()
{
     int b;
    int n;
    int m;
    cin >> b>> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }
    /*
     * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
     */

    int moneySpent = getMoneySpent(keyboards, pendrives, b);

    cout << moneySpent << "\n";

    return 0;
}

