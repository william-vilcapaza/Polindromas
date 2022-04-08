#include <iostream>

using namespace std;

int main()
{    string palabra;
     string reves;
     int i=0;
    cout << "ingrese palabra" << endl;
    cin >>reves;

    i=reves.length();
    while(i>=0){
        i--;
        palabra=palabra+reves[i];
    }
    cout<<"\nSu palabra es: "<<reves<<endl;
    cout<<"La palabra la revez es: "<<palabra<<endl;
    if(reves == palabra){
        cout<<"Es palindroma"<<endl;
    }
    else{
        cout<<"No es palindroma"<<endl;
    }
    return 0;
}
