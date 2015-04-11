a;b;c;
main5(){
	printf("Input: \n");
	scanf("%d", &c);
z:
	while (++b) {
		for (a=0; a++<c;)if(b%a!=0)goto z;
		break;
	}
	
	printf("%d\n", b);
	printf("\nDone!");  return 0;
}