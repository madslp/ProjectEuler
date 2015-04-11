n;i;a;
main(){
	printf("Input: \n");
	scanf("%d",&n);
	for (; ++i < n;)if (!(i % 3 && i % 5))a+=i;
	printf("%d\n",a);
	printf("\nDone!");
	return 0;
}