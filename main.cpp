#include <iostream>

using namespace std;

int main()
{
int a,b;
cout << " Masukan Angka ganjil Pertama : ";cin>>a;
cout << " Masukan Angka Ganjil Terakhir : ";cin>>b;

for(a;a<=b;a+=2)
{
    cout <<a;
    if (a<b)
    {
        cout<<" , ";
    }
}
return 0;


}

