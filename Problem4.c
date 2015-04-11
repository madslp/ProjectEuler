a;b;c;d;
main4(){
	char s[6]="123456";
	for (a=1000; --a > 99;)
		for (b=1000;--b>99;){
			d = a*b;
			sprintf(s,"%d",d);
			if (s[0] == s[5] && s[1] == s[4] && s[2] == s[3]) if(d>c)c=d;
		}
	printf("%d\n",c);
	printf("\nDone!"); return 0;
}