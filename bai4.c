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
	char tmp[30], account[30];
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
	char time1[50], time2[50];

	while (scanf("%s", tmp)){
		if (strcmp(tmp,"#") == 0) break;
		if (strcmp(tmp, "?max_money_period") == 0){
			scanf("%s %s", &time1, &time2);
            int ans = 0;
			for (i=0; i<n; i++)
				if (strcmp(time1, a[i].gio) <= 0 && strcmp(time2, a[i].gio) >= 0 && ans < a[i].m) ans = a[i].m;
			printf("%d\n", ans);
		}
	}

  	return 0;
}
