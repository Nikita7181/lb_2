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
        if (c >= 48 && c <= 57) {
            cout << "Number" << endl;
        } else if (c >= 65 && c <= 90) {
            cout << "Letter" << endl;
        } else if (c >= 97 && c <= 122) {
            cout << "Letter" << endl;
        } 
        else cout << "Unknown character" << endl;
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
    float x,f,d;
    int l,k=0,n1=0,n2=0,n3=0,n4=0,n5=0;
    cout << "Entered value x=" << endl;
    cin >> x ;
    f=log(1+x);
    l=static_cast<int>(f*pow(10, 2))%10;
    do
    {
        n1++;
        d = (pow(-1, (n1 + 1)) * ((pow(x, n1)) / n1));
        k=static_cast<int>(d*pow(10, 2))%10;
    }while (l!=k);
    cout << "n1=" ;
    cout << n1 << endl;
    k=0;d=0;
    l=static_cast<int>(f*pow(10, 3))%10;
    do
    {
        n2++;
        d = (pow(-1, (n2 + 1)) * ((pow(x, n2)) / n2));
        k=static_cast<int>(d*pow(10, 3 ))%10;
    }while (l!=k);
    cout << "n2=";
    cout << n2 << endl;
k=0;d=0;
    l=static_cast<int>(f*pow(10, 4))%10;
    do
    {
        n3++;
        d = (pow(-1, (n3 + 1)) * ((pow(x, n3)) / n3));
        k=static_cast<int>(d*pow(10, 4 ))%10;
    }while (l!=k);
    cout << "n3=" ;
    cout << n3 << endl;
    k=0;d=0;
    l=static_cast<int>(f*pow(10, 5))%10;
    do
    {
        n4++;
        d = (pow(-1, (n4 + 1)) * ((pow(x, n4)) / n4));
        k=static_cast<int>(d*pow(10, 5 ))%10;
    }while (l!=k);
    cout << "n4=" ;
    cout << n4 << endl;
    k=0;d=0;
    l=static_cast<int>(f*pow(10, 6))%10;
    do
    {
        n5++;
        d = (pow(-1, (n5 + 1)) * ((pow(x, n5)) / n5));
        k=static_cast<int>(d*pow(10, 6 ))%10;
    }while (l!=k);
    cout << "n5=" ;
    cout << n5 << endl;
    return 0;
}
