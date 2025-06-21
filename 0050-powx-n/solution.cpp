class Solution {
public:
    double myPow(double x, int n) {
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long Binform = n;
    double ans = 1;
    if (n < 0)
    {
        x = 1 / x;
        Binform = -Binform;
    }

    while (Binform > 0)
    {
        if (Binform % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        Binform /= 2;
    }
    return ans;
    }
};
