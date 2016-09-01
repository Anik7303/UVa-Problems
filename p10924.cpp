#include <iostream>
#include <cstdio>
using namespace std;

#define N 100000
#define sf scanf
#define pf printf
int isPrime[N];

void SieveOfEratosthenes() {
    int i, j;
    isPrime[0] = 1;
    for(i=4; i<=N; i+=2) {
        isPrime[i] = 1;
    }
    for(i=3; i*i<=N; i+=2) {
        if(isPrime[i]==0) {
            for(j=i+i; j<=N; j+=i) {
                isPrime[j] = 1;
            }
        }
    }
}

int main()
{
    SieveOfEratosthenes();
    string ch;
    int sum , i, x;
    while(getline(cin, ch)) {
        sum = 0;
        for(i=0; ch[i]; i++) {
            if(ch[i]>=48 && ch[i]<=57) {
                x = ch[i]-48;
                sum+=x;
            }else if(ch[i]>='a' && ch[i]<='z') {
                x = ch[i]-96;
                sum+=x;
            }else if(ch[i]>='A' && ch[i]<='Z') {
                x = ch[i]-38;
                sum+=x;
            }
        }
        if(isPrime[sum]==0) {
            pf("It is a prime word.\n");
        }else {
            pf("It is not a prime word.\n");
        }
    }
}
