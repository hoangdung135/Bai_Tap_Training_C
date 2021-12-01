#include <stdio.h>
#include<math.h>
main()
{
	int n, m = 0, tmpN;
	scanf("%d", &n);
	tmpN = n;
	while(tmpN)
	{
		m = m * 10 + (tmpN % 10);
		tmpN /= 10;
	}
	if(n == m)printf("YES");
	else printf("NO");
} 

