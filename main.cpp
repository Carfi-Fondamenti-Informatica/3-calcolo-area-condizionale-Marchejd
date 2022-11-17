#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, opzione=0;
cin>>a>>b>>opzione;

    if (opzione==0 or opzione==1 or opzione==2)   {
        
        switch (opzione) {
            case 0:
                cout<<a*b/2<<endl;
                break;
            case 1:
                cout<<a*a<<endl;
                break;
            case 2:
                cout<<a*b<<endl;}

    }
    else {cout<<"opzione non valida"<<endl;}
   return 0;
}
