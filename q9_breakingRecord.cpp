#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
 int max=scores[0];
 int min=scores[0];
 int max_c=0,min_c=0;
 vector<int>arr;
 for (int i=0;i<scores.size();i++)
 {
     if(max<scores[i])
     {
           max=scores[i];
           max_c++;
     }
     if(min>scores[i])
     {
       min=scores[i];
       min_c++;
     }
   
 }
 arr.push_back(max_c);
 arr.push_back(min_c);
 
 return(arr);

}

int main()
{
 

   int n;
    cin >> n;
    vector<int> scores(n);
    for(int score_i = 0; score_i < n; score_i++)
    cin >> scores[score_i];

    vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }



    return 0;
}


