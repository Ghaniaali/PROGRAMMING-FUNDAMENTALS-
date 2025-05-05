#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    cout << "Enter the Third Number: ";
    cin >> c;
    cout << "Enter the Fourth Number: ";
    cin >> d;

    if (a >= b && a >= c && a >= d)
    {
        n1 = a;
        if (b >= c && b >= d)
        {
            n2 = b;
            if (c >= d)
            {
                n3 = c;
                n4 = d;
            }
            else
            {
                n3 = d;
                n4 = c;
            }
        }
        else if (c >= b && c >= d)
        {
            n2 = c;
            if (b >= d)
            {
                n3 = b;
                n4 = d;
            }
            else
            {
                n3 = d;
                n4 = b;
            }
        }
        else if (d >= b && d >= c)
        {
            n2 = d;
            if (b >= c)
            {
                n3 = b;
                n4 = c;
            }
            else
            {
                n3 = c;
                n4 = d;
            }
        }
    }
    else if (b >= a && b >= c && b >= d)
        {
            n1 = b;
            if (a >= c && a >= d)
            {
                n2 = a;
                if (c >= d)
                {
                    n3 = c;
                    n4 = d;
                }
                else
                {
                    n3 = d;
                    n4 = c;
                }
            }
            else if (c >= a && c >= d)
            {
                n2 = c;
                if (a >= d)
                {
                    n3 = a;
                    n4 = d;
                }
                else
                {
                    n3 = d;
                    n4 = a;
                }
            }
            else if (d >= a && d >= c)
            {
                n2 = d;
                if (a >= c)
                {
                    n3 = a;
                    n4 = c;
                }
                else
                {
                    n3 = c;
                    n4 = a;
                }
            }
        }
        else if (c >= a && c >= b && c >= d)
        {
            n1 = c;
            if (b >= a && b >= d)
            {
                n2 = b;
                if (a >= d)
                {
                    n3 = a;
                    n4 = d;
                }
                else
                {
                    n3 = d;
                    n4 = a;
                }
            }
            else if (a >= b && a >= d)
            {
                n2 = a;
                if (b >= d)
                {
                    n3 = b;
                    n4 = d;
                }
                else
                {
                    n3 = d;
                    n4 = b;
                }
            }
            else if (d >= b && d >= a)
            {
                n2 = d;
                if (b >= a)
                {
                    n3 = b;
                    n4 = a;
                }
                else
                {
                    n3 = a;
                    n4 = b;
                }
            }
        }
        if (d >= a && d >= b && d >= c)
        {
            n1 = d;
            if (b >= c && b >= a)
            {
                n2 = b;
                if (c >= a)
                {
                    n3 = c;
                    n4 = a;
                }
                else
                {
                    n3 = a;
                    n4 = c;
                }
            }
            else if (c >= b && c >= a)
            {
                n2 = c;
                if (b >= a)
                {
                    n3 = b;
                    n4 = a;
                }
                else
                {
                    n3 = a;
                    n4 = b;
                }
            }
            else if (a >= b && a >= c)
            {
                n2 = a;
                if (b >= c)
                {
                    n3 = b;
                    n4 = c;
                }
                else
                {
                    n3 = c;
                    n4 = b;
                }
            }
        }
    cout << "|Descending order:| " << n1 << " , " << n2 << " , " << n3 << " , " << n4 << endl;
    cout << "|Ascending order :| " << n4 << " , " << n3 << " , " << n2 << " , " << n1 << endl;

    return 0;
}

