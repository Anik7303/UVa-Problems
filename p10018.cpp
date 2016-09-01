#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;

int count;

template <typename T>
string numberToString(T number) {
    ostringstream ss;
    ss << number;
    return ss.str();
}

long long int digitCount(long long int x) {
    long long int i = 0;
    while(x>0) {
        x = x/10;
        i++;
    }
    return i;
}

long long int digitRev(long long int x) {
    long long int len , i, a, p, t;
    p = 1, t = 0;
    len = digitCount(x);
    for(i=len-1; i>=0; i--) {
        a = x/pow(10, i);
        a = a%10;
        a = a*p;
        t = t+a;
        p = p*10;
    }
    return t;
}

long long int recurseDigit(long long int a) {
    long long int b, z, len, flag, i, j;
    string s;
    flag = 0;
    if(count==0) {
        s = numberToString(a);
        for(len=0; s[len]; len++);
        for(i=0, j=len-1; i<=len/2; i++, j--) {
            if(s[i]!=s[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0) {
            return a;
        }
    }
    count++;
    flag = 0;
    b = digitRev(a);
    z = a+b;
    s = numberToString(z);
    for(len=0; s[len]; len++);
    for(i=0, j=len-1; i<=len/2; i++, j--) {
        if(s[i]!=s[j]) {
            flag = 1;
            break;
        }
    }
    if(flag==1) {
        return recurseDigit(z);
    }else {
        return z;
    }
}

int main()
{
    long long int res, a, i, t;
    scanf("%lld", &t);
    for(i=0; i<t; i++) {
        count = 0;
        scanf("%lld", &a);
        res = recurseDigit(a);
        printf("%d %lld\n", count, res);
    }
}
