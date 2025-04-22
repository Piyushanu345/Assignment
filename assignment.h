void armstrong(int n1){
    int a = n1, c = 0, s = 0, d;
    while (a > 0) {
        d = a % 10;
        c++;  
        a = a / 10; 
    }
    int b = n1;
    while (b > 0) {
        d = b % 10;
        s += pow(d, c);  
        b = b / 10;  
    }
int palindrome(int a)
{
    int b;
    int p = 0;
    int temp = a;
    while (a > 0)
    {
        b = a % 10;
        p = p * 10 + b;
        a = a / 10;
    }
    if (temp == p)
    {
        return 1;
    }
    return 0;
}

int spynumber(int n)
{
    int sum;
    int m = 1;
    int temp1;
    int n2 = n;
    int temp2;
    while (n > 0)
    {
        temp1 = n % 10;
        sum = sum + temp1;
        n = n / 10;
    }
    while (n2 > 0)
    {
        temp2 = n2 % 10;
        m = m * temp2;
        n2 = n2 / 10;
    }
    if (sum == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
