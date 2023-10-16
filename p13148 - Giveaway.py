import math

global ls;
ls = [1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121];

def main():
	n = 1;
	while n!=0:
		n = int(input());
		if n==0:
			break;
		if n in ls:
			print('Special');
		else :
			print('Ordinary');

main();
