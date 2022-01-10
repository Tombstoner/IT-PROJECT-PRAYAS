#include <stdio.h>

int main(void) {
	int t;
	scanf("%d" , &t);
	
	while(t--) {
	    int n , k , s , sum = 0;
	    scanf("%d%d%d" , &n,&k,&s);
	    
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        arr[i] = 2*i + 1;
	        sum += (2*i + 1);
	    }
	    
	    sum += ((k-1) * arr[0]);
	    int count = 0;
	    
	    while(sum != s) {
            sum += 2 * (k - 1);
            count ++;
	    }
	    
	    printf("%d\n" , arr[count]);
	}
	return 0;
}

