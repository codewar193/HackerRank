#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z)
{

    string rel;
    if (abs(x - z) == abs(y - z))
    {
        rel = "Mouse C";
    }

    else if (abs(x - z) < abs(y - z))
    {
        rel = "Cat A";
    }
    else
    {
        rel = "Cat B";
    }
    return rel;
}

int main()
{

    int q;
    cin >> q;

    for (int a0 = 0; a0 < q; a0++)
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;

        string result = catAndMouse(x, y, z);

        cout << result << "\n";
    }

    return 0;
}
