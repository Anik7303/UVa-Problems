#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 27

int main() {
	int i, x, t;
    int str1[MAX], str2[MAX];
    string s1, s2;
    t = 0;
    while(getline(cin, s1), getline(cin, s2)) {
    	
    	for(i = 0; i<MAX; i++) {
    		str1[i] = 0;
			str2[i] = 0;
    	}
    	
    	for(i=0; s1[i]; i++) {
    		x = s1[i] - 97;
    		str1[x]++;
    	}
    	
    	for(i=0; s2[i]; i++) {
    		x = s2[i] - 97;
    		if(str1[x] > 0) {
    			str2[x]++;
    		}
    	}
    	
    	for(int i=0; i<MAX; i++) {
    		if(str1[i] > 0 && str2[i] > 0) {
				int n = min(str1[i], str2[i]);
    			for(int j = 0; j < n; j++) {
					printf("%c", i+97);
				}
    		}
    	}
		
		printf("\n");
    }
    
    return 0;
}