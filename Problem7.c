#include<math.h>
a;b;i;n;
main(){
	printf("Input: \n");
	scanf("%d", &a);
	int j = 1, l[200000];
	while(n<a-1){
		j += 2;
		b = 1;
		for (i = 0; i < n; i++){
			if (l[i]>sqrt(j))break;
			if (j%l[i] == 0){ b = 0; break; }
		}
		if (b){
			l[n] = j;
			n++;
		}
	}
	
	printf("%d\n", l[n-1]);
	printf("\nDone!"); return 0;
}