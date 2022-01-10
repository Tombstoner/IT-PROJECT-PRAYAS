#include <stdio.h>

int main(void) {
	int t;
	scanf("%d" , &t);
	while(t--) {
	    int n , k;
	    scanf("%d%d" , &n , &k);
	    
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        scanf("%d" , &num);
	        
	        num += k;
	        
	        if (num % 7 == 0) count ++ ;
	    }
	    printf("%d\n" , count);
	    
	}
	return 0;
}

