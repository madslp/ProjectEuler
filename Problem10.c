#include<math.h>
a; b; c; i; n;
main(){printf("Input:\n");
	scanf("%d", &a);
	int j = 1,n=1, l[200000];
	long long c = 2;
	l[0] = 2;
	while (j<a){
		j += 2;
		b = 1;
		for (i = 0; i < n; i++){
			if (l[i]>=sqrt(j)+1)break;
			if (j%l[i] == 0){ b = 0; break; }
		}
		if (b){
			l[n] = j;
			c += j;
			n++;
		}
	}

	printf("%lld\n", c);
	printf("\nDone!"); return 0;
}