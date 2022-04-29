#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word) {
int max=0;

for(char& c: word)
{
    int temp=h[c-97];
    if(max<temp)
     max=temp;
}
return max*word.size();

}

int main()
{
    int height = -1,len,heights[26],b;
     string word;

    vector<int> h(26);
    for(int i = 0; i < 26; i++)
    {
        b=h[i];

       h.push_back(b);
    }

    getline(cin, word);
    int result = designerPdfViewer(h, word);

    cout << result << "\n";
    return 0;
}

