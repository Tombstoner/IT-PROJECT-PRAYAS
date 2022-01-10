#include <stdio.h>

int main(void) {
    int t;
    scanf("%d" , &t);
    
    while (t --) {
        int d , c;
        
        scanf("%d%d" , &d , &c);
        
        int acost = 0 , bcost = 0;
        for (int i = 0; i < 3; i++) {
            int num;
            scanf("%d" , &num);
            acost += num;
        }
        
        for (int i = 0; i < 3; i++) {
            int num;
            scanf("%d" , &num);
            bcost += num;
        }
        
        if (acost >= 150 && bcost < 150) {
            if (d > c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        
        else if (acost < 150 && bcost >= 150) {
            if (d > c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        
        else if (acost >= 150 && bcost >= 150) {
            if (2*d > c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        
        else {
            printf("NO\n");
        }
    }
    
	return 0;
}

