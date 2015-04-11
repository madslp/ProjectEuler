a;b;c;n;
main(){
	printf("Input: \n");
	scanf("%d", &n);	
	for (a=3; a <= (n-3)/3; a++)
		for (b = a + 1; b <= (n - 1 - a) / 2; b++){
			c = n - a - b;
			if (a*a + b*b == c*c)
				goto z;
		}				
	z:
	printf("%d\n", a*b*c);
	printf("\nDone!",n);return 0;
}