#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

string hr_str= s.substr(0,2);
int hr_int =stoi(hr_str);
size_t temp= s.find("PM");
size_t temp1= s.find("AM");
if(temp != string::npos)
{
    if(hr_int+12<24)
    {
        hr_str= to_string(hr_int+12);
    }
    else if(hr_int==12)
    {
        hr_str="12";
    }
}
if(temp1 != string::npos)
{
    if(hr_int==12)
    {
        hr_str="00";
    }
     else if(hr_int>12)
    {
        hr_str= to_string(hr_int-12);
    }
  
    cout<<hr_str<<endl;
}
return s.replace(0,2,hr_str).erase(s.size()-2);

}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
