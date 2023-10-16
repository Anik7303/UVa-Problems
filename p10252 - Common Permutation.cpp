#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int t = 0;
    int alphabets[27];
    string s1, s2;
    
    while(getline(cin, s1)) {
    	getline(cin, s2);
    	if(t > 0) printf("\n");
    	
    	for(int i = 0; i<27; i++) {
    		alphabets[i] = 0;
    	}
    	
    	int x;
    	for(int i=0; s1[i]; i++) {
    		x = s1[i] - 97;
    		alphabets[x] = 1;
    	}
    	
    	for(int i=0; s2[i]; i++) {
    		x = s2[i] - 97;
    		if(alphabets[x] == 1) {
    			alphabets[x] = 2;
    		}
    	}
    	
    	for(int i=0; i<27; i++) {
    		if(alphabets[i] == 2) {
    			printf("%c", i+97);
    		}
    	}
    	t++;
    }
    
    return 0;
}