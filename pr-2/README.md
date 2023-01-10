<h1>PR-2</h1>

<u>**Aim**</u> : 1. WAP to pass function as an argument to a function.

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    int h1(int, int);
    int h2(int);
    int main()
    {
    int a = 10, b = 10;
    h2(h1(a, b));
    }
    int h1(int a, int b)
    {
    return (a + b);
    }
    int h2(int a)
    {
    cout << "Addition is " << a;
    }

<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> : 2. WAP to swap elements of two integer arrays using user define function.

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    void swap();
    int main()
    {
    swap();
    }
    void swap()
    {
    int a[5], b[5], c[5], i;
    cout << "Enter 1st Array =" << endl;
    for (i = 0; i < 5; i++)
    cin >> a[i];
    cout << "Enter 2nd Array =" << endl;
    for (i = 0; i < 5; i++)
    cin >> b[i];
    for (i = 0; i < 5; i++)
    {
    c[i] = a[i];
    a[i] = b[i];
    b[i] = c[i];
    }
    cout << "After Swaping Array" << endl;
    cout << "1st Array" << endl;
    for (i = 0; i < 5; i++)
    {
    cout << a[i] << endl;
    }
    cout << "2nd Array" << endl;
    for (i = 0; i < 5; i++)
    {
    cout << b[i] << endl;
    }
    }

<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> : 3. WAP to find factorial using recursion.

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    int fact(int);
    int main()
    {
    int n, ans;
    cout << "Enter Value Of N = ";
    cin >> n;
    ans = fact(n);
    cout << "Factorial Of " << n << " is = " << ans;
    }
    int fact(int a)
    {
    if (a <= 1)
    return 1;
    else
    return a * fact(a - 1);
    }

<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> : 4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    int table();
    int main()
    {
    table();
    return 0;
    }
    inline int table()
    {
    int n, i;
    cout << "Enter Number = ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
    cout << n << " " << i << " " << n * i << endl;
    }
    }

<u>**Output**</u> :

[Error Text]()
