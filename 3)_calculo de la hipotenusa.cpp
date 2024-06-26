#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float cateto1,cateto2;
	float hipotenusa;
    cout<<"ingrese  el primer cateto: "<<endl;
    cin>>cateto1;
    cout<<"ingrese el segundo cateto: "<<endl;
    cin>>cateto2;
    
    
    hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
    cout<<"la hipotenusa es: "<<hipotenusa<<endl;
    return 0;
}
