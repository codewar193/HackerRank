#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &);

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) {

vector <int> temp;
int count=1,start=0,len=0;
sort(a.begin(),a.end());

for(int i=1;i<a.size();i++)
{
   if(a[i]-a[start]>=2)
     {
         count=1;
         len=max(len,i-start);
         start=i;
     }
     else {
     count++;
     }
     
}


return max(count,len);
}

int main()
{
    int size_of_array;
	cin >> size_of_array;
	vector<int> array(size_of_array);

	for (int i = 0; i < size_of_array; ++i)
	{
		cin >> array[i];
	}

	int max_count = pickingNumbers(array);
	cout << max_count << "\n";
}