#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Transaction{
	char _from[30];
	char _to[30];
	int m;
	char gio[30];
	char atm[30];
} a[100005];

int main() {
	int n = 0;
	char tmp[30];
	while (scanf("%s", tmp)){
		if (strcmp(tmp,"#") == 0) break;
		strcpy(a[n]._from, tmp);
		scanf("%s", a[n]._to);
		scanf("%d", &a[n].m);
		scanf("%s", a[n].gio);
		scanf("%s", a[n].atm);
		n+= 1;
	}
	int i;
	long long sum = 0;
	for (i=0; i<n; i++) sum += a[i].m;

	while (scanf("%s", tmp)){
		if (strcmp(tmp,"#") == 0) break;
		if (strcmp(tmp, "?total_m_transaction") == 0) printf("%lld\n", sum);
	}

  	return 0;
}
