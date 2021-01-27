#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    cout << "task 1" << endl;
    for (int i = 0; i < 255; i++)
        cout <<i << ":" << static_cast<char>(i) << "\t";
    cout << endl;
    cout << "task 2" << endl;
    char c;
    cout << "Hello" << endl;
    cout << "Entered value: ";
    cin >> c;
    {
        if (c >= 48 && c <= 57)
        {
            cout << "Number" << endl;
        } else if (c >= 65 && c <= 90)
        {
            cout << "Letter" << endl;
        } else if (c >= 97 && c <= 122)
        {
            cout << "Letter" << endl;
        }
        else
        {
            cout << "another symbol" << endl;
        }
    }
    {int x,y;
        cout << "task 3"<< endl;
        cout << "Entered value: " << endl;
        cin >> x;
        y=x%5;
        switch (y) {
            case 0:
                cout << "y(x)= " << 0 << endl;
                break;
            case 1:
                cout << "y(x)= " << pow(x, 2) << endl;
                break;
            case 2:
                cout << "y(x)= " << x << endl;
                break;
            case 3:
                cout << "y(x)= " << 1-x << endl;
                break;
            case 4:
                cout << "y(x)= " << pow(x, 3) << endl;
                break;
            
        }
    }
    cout << "task 4" << endl;
    float x,f,s;
    int n1=2;
    cout << "Entered value x=" << endl;
    cin >> x ;
    s = x;
    float k =0.01;
    f=log(1+x);
    do
        {
        
            do
            {
                s = s + (pow(-1, (n1 + 1)) * ((pow(x, n1)) / n1));
                n1++;
            }
            while((f-s)>k);
            k = k / 10;
            cout << "rez= " << s << " " << "iter= " << n1-1 << endl;
    }while(k>0.000001);
    return 0;
}
