#include <stdio.h>
#include<math.h>
int a,b,i,j,n,k,c,t,c2;
main(){
	int x[] = {1,3,5,7,9,11,13,15};
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			for(k=0;k<8;k++){
				if(x[i]+x[j]+x[k]==30)printf("30: %d\t%d\t%d\n", x[i],x[j],x[k]);
			}
		}
	}

	printf("\nDone!"); return 0;
}