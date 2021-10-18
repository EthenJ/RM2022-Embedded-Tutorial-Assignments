#include <iostream>
using namespace std;

const int MAX_LEN = 256; // 对不起，我是真的不会动态的array

void solve(const int p[], const int n, int &return_score)
{
    int r[MAX_LEN] = {};
    int s[MAX_LEN] = {};
    r[0] = 0;
    for (int j = 1; j <= n; j++)
    {
        int q = -1;
        for (int i = 1; i <= j; i++)
        {
            if (q < p[i] + r[j - 1])
            {
                q = p[i] + r[j - 1];
                s[j] = i;
            }
        }
        r[j] = q;
    }
    int j = n;
    while (j > 0)
    {
        cout << s[j] << endl;
        return_score += p[s[j]];
        j = j - s[j];
    }
}

int main()
{
    int n = 10;
    int p_n[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

    int score = 0;
    solve(p_n, n, score);
    cout << "max score: " << score << endl;
    return 0;
}
