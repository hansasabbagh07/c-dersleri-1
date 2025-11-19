int k=13,l=7,m;
	int x=42,y=65,z;
	int a=16,b=4,c;
	
	m= ++k / l--;
	z= --x * y++;
	c= a++ - --b;
	
	printf("K=%d, L=%d, M=%d\n", k,l,m);
	printf("X=%d, Y=%d, Z=%d\n", x,y,z);
	printf("A=%d, B=%d, C=%d\n", a,b,c);