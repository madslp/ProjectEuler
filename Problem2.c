a;b;c; i; s;t;
main(){
	printf("Input: \n");
	scanf("%d %d %d", &a,&b,&c);
	while (t < c + 1){ t = a + b; a = b; b = t; s += t % 2 ? 0:t; }
	printf("%d\n", s);
	printf("\nDone!"); scanf("%d", &a); return 0;
}