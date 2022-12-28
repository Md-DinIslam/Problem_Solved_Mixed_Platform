class Solution
{
public:
    int reverse(int x)
    {
        long reverse = 0;
        int remainder = 0;
        while (x != 0)
        {
            remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x /= 10;
        }
        if(reverse > pow(-2,31) && reverse < pow(2,31)-1) 
        return reverse;
        else
        return 0;
    }
};