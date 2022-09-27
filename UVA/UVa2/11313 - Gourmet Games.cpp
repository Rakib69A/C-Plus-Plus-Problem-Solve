
#include<bits/stdc++.h>

// Nayeem Shahriar Joy , Applied Physics & Electronic Engineering , University of Rajshahi.

using namespace std;

   int main()
{
    int n, m, i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);

        if ((n - 1) % (m - 1) != 0)
        {
            puts("cannot do this");
        }
        else
        {
            printf("%d\n", (n - 1) / (m - 1));
        }
    }
    return 0;
}
