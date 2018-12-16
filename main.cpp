#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int X,Y;

    cout<<"program Mengetahui kuadrat suatu kordinat"<<endl;
    cout<<endl<<endl;

    cout<<"Masukann Kordinat X : "; cin>>X;
    cout<<"Masukan  kordinat Y : "; cin>>Y;
    cout<<endl;

    cout<<"kordinat X = " <<X<<endl;
    cout<<"kordinat Y = " <<Y<<endl;
    cout<<endl;
    cout<<"berada di";
    cout<<endl;
    {

    if(X>0 && Y<0)
    cout<<"KUADRAT I";
    else if(X>0 && Y<0)
    cout<<"KUADRAT II";
    else if(X<0 && Y<0)
    cout<<"KUADRAT III";
    else if(X<0 && Y>0)
    cout<<"KUADRAT IV";
    else if(X==0 && Y==0)
    cout<<"TITIK PUSAT";

    }

    cout<<endl;

    getch();
    return 0;

    }
