#include <stdio.h>
#include<math.h>
int a,b,i,n,k,c,t,c2;
main(){
	printf("Input: \n");
	scanf("%d", &a);
	int j = 1, l[200000];
	while(c*c2<=a){
		j ++;
		b = 1;
		for (i = 0; i < n; i++){
			if (l[i]>sqrt(j))break;
			if (j%l[i] == 0){ b = 0; break; }
		}
		if (b){
			l[n] = j;
			n++;
		}
		if(j%2==0)
			b=j/2;
		else b=j;
		c=1;
		for(i=0;i<n;i++){
			if(b%l[i]==0){
				k=1;
				while(b%l[i]==0){
					b/=l[i];
					k++;
				}
				c*=k;
			}
		}
		if(j%2==0)
			b=j+1;
		else b=(j+1)/2;
		c2=1;
		for(i=0;i<n;i++){
			if(b%l[i]==0){
				k=1;
				while(b%l[i]==0){
					b/=l[i];
					k++;
				}
				c2*=k;
			}
		}
	}
	printf("Output: %d\t%d\n", c*c2, (j*j+j)/2);
	printf("\nDone!"); return 0;
}