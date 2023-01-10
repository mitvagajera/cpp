<h1>PR-3</h1>

<u>**Aim**</u> : 1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    class dis
    {
    private:
    int feet1, feet2, inch1, inch2;
    int a, b;
    public:
    void getdis()
    {
    cout << "FIRST DISTANCE" << endl
    << endl;
    cout << "Enter Feet : ";
    cin >> feet1;
    cout << "Enter Inch : ";
    cin >> inch1;
    cout << "SECOUND DISTANCE" << endl
    << endl;
    cout << "Enter Feet : ";
    cin >> feet2;
    cout << "Enter Inch : ";
    cin >> inch2;
    a = feet1 + feet2;
    b = inch1 + inch2;
    while (b >= 12)
    {
    b -= 12;
    a++;
    }
    }
    void setdis()
    {
    cout << "Add two distance:" << endl
    << endl;
    cout << "Feet = " << a << endl;
    cout << "Inch = " << b << endl;
    }
    };
    int main()
    {
    dis a1;
    a1.getdis();
    a1.setdis();
    }
    
<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> : 2. WAP to create a class to read and add two times.

<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    class times
    {
    int hour, min, sec, hour1, min1, sec1;
    int a, b, c;
    public:
    void settime()
    {
    cout << endl
    << "1ST TIME" << endl
    << endl;
    cout << "Enter Hour:";
    cin >> hour;
    cout << "Enter Minutes:";
    cin >> min;
    cout << "Enter Secounds:";
    cin >> sec;
    cout << endl
    << "2ND TIME" << endl
    << endl;
    cout << "Enter Hour:";
    cin >> hour1;
    cout << "Enter Minutes:";
    cin >> min1;
    cout << "Enter Secounds:";
    cin >> sec1;
    a = hour + hour1;
    b = min + min1;
    c = sec + sec1;
    while (c >= 60)
    {
    c -= 60;
    b++;
    }
    while (b >= 60)
    {
    b -= 60;
    a++;
    }
    }
    void gettime()
    {
    cout << endl
    << "Total Time Is:" << endl
    << endl;
    cout << "Hour:" << a << endl
    << "Minutes:" << b << endl
    << "Secounds:" << c;
    }
    };
    int main()
    {
    times a1;
    a1.settime();
    a1.gettime();
    }
<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> :3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.


<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    class times
    {
    int hour, min, sec;
    ;
    public:
    void settime()
    {
    cout << endl
    << "Enter Secounds:";
    cin >> sec;
    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;
    }
    void gettime()
    {
    cout << hour << ":" << min << ":" << sec << endl;
    }
    };
    int main()
    {
    times a1;
    a1.settime();
    a1.gettime();
    }

<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> :4. WAP to create a class which Read and Print House details along with Room details.


<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    class house
    {
    private:
    int room, kitchen, hall;
    int sofa, ac, bed;
    public:
    void shouse()
    {
    cout << endl
    << "HOUSE DETAILS:" << endl
    << endl;
    cout << "Enter room:";
    cin >> room;
    cout << "Enter kitchen:";
    cin >> kitchen;
    cout << "Enter hall:";
    cin >> hall;
    cout << endl
    << "ROOM DETAILS:" << endl
    << endl;
    cout << "Enter sofa:";
    cin >> sofa;
    cout << "Enter AC:";
    cin >> ac;
    cout << "Enter bed:";
    cin >> bed;
    }
    void ghouse()
    {
    cout << endl
    << "IN HOUSE" << endl
    << endl
    << room << " Room" << endl
    << kitchen << " Kitchen" << endl
    << hall << " Hall" << endl
    << endl
    << "In Room" << endl
    << endl
    << sofa << " Sofa" << endl
    << ac << " AC" << endl
    << bed << " Bed";
    }
    };
    int main()
    {
    house a1;
    a1.shouse();
    a1.ghouse();
    }
<u>**Output**</u> :

[Error Text]()

<u>**Aim**</u> :5. WAP which illustrates the use of public and private access modifiers.


<u>**Program**</u> :

    #include <iostream>
    using namespace std;
    class name
    {
    private:
    char n[200];
    public:
    void snm()
    {
    cout << "Enter Name : ";
    cin >> n;
    }
    void gnm()
    {
    cout << endl
    << "=====================" << endl
    << n;
    }
    };
    int main()
    {
    name a1;
    a1.snm();
    a1.gnm();
    }
<u>**Output**</u> :

[Error Text]()


