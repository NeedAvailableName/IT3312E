#include<stdio.h>
int binary_search(int low, int high, int s[], int key) {
    int mid=(low+high)/2;
    if(low<=high) {
    	if(key==s[mid]) return (mid+1);
        else if(key>s[mid]) return binary_search(mid+1,high,s,key);
        else return binary_search(low,mid-1,s,key);
	}
	else return -1;
}
int main() {
    int s[]={6,13,14,25,33,43,51,53,64,72,84,93,95,96,97};
    int key=31;
    printf("%d\n", binary_search(0,14,s,key));
    return 0;
}
/*mid=(0+14)/2=7
key=31<s[7]=53 binary_search(0,6,s,key)
mid=(0+6)/2=3
key=31>s[3]=25 binary_search(4,6,s,key)
mid=(4+6)/2=5
key=31<s[5]=43 binary_search(4,4,s,key)
mid=(4+4)/2=4
key=31<s[4]=33 binary_search(4,3,s,key) -> return -1*/