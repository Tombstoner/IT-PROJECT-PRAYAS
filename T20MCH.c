#include <stdio.h>

int main(void) {
	int r , o , c;
	scanf("%d%d%d" , &r,&o,&c);
	
	int beatScore = r;
	int hypoSetScore = (20 - o)*36 + c;
	(hypoSetScore - beatScore > 0) ? printf("YES") : printf("NO");
	return 0;
}

