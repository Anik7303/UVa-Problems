#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int N, B, H, W, i, j, p[18], r[13], price, result, ok;
    while((scanf("%lld %lld %lld %lld", &N, &B, &H, &W))!=EOF) {
        result = 500100;
        for(i=0; i<H; i++) {
            ok = 0;
            scanf("%lld", &p[i]);
            for(j=0; j<W; j++) {
                scanf("%lld", &r[i]);
                if(r[i]>=N) {
                    ok = 1;
                }
            }
            price = p[i]*N;
            if(price<=B && price<result && ok==1) {
                result = price;
            }
        }
        if(result==500100) {
            printf("stay home\n");
        }else {
            printf("%lld\n", result);
        }
    }
}
