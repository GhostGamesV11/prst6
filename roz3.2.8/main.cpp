#include <iostream>

using namespace std;

void f(int &b, int *c)
{
    int a;
    a=b;
    b=*c;
    *c=a;
}

int main()
{
    int liczba1=9;
    int liczba2=10;
    f(liczba1,&liczba2);
    cout<<liczba1<<endl;
    cout<<liczba2<< endl;
    return 0;
}
