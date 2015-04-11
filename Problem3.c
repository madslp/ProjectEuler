main(){
	printf("Input: \n");
	long long a, b=1, c;
	scanf("%d", &a);
	while (a > 1){ while (a%b == 0) a /= b; 
	if (++b*b > a){if (a > b)b = a; break;}}
	printf("%d\n", b);
	printf("\nDone!") ; return 0;
}