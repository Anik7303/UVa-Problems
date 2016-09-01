#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    string s;
    int i = 1;
    while(getline(cin, s) && s!="#") {
        if(s=="HELLO") {
            cout << "Case " << i << ": ENGLISH" << endl;
        }else if(s=="HOLA") {
            cout << "Case " << i << ": SPANISH" << endl;
        }else if(s=="HALLO") {
            cout << "Case " << i << ": GERMAN" << endl;
        }else if(s=="BONJOUR") {
            cout << "Case " << i << ": FRENCH" << endl;
        }else if(s=="CIAO") {
            cout << "Case " << i << ": ITALIAN" << endl;
        }else if(s=="ZDRAVSTVUJTE") {
            cout << "Case " << i << ": RUSSIAN" << endl;
        }else {
            cout << "Case " << i << ": UNKNOWN" << endl;
        }
        i++;
    }
}
