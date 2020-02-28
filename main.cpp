#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//2.2鸡兔同笼
/*int main() {
	int nCase,nFeets;
	while (scanf("%d",&nCase)!= EOF){
		for (int i = 0; i < nCase; i++) {
			scanf("%d",&nFeets);
			if(nFeets%4==0)
				printf("%d%d\n",nFeets/4,nFeets/2);
			else if (nFeets%2==0)
				printf("%d %d\n",nFeets+1,nFeets/2);
			else
				printf("0 0\n");
		}
		exit(0);
	}
	return 0;
}*/

//2.3 校门外的树

//2-5 与瑟夫问题
/*int flag[305];
void init() {
	for ( int index = 0; index < 305; index++ ) {
		flag[index] = 0;
	}
}
int main() {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	while ( n != 0 && m != 0 ) {
		int index = -1;
		int count = 0;
		init();
		for ( int i = 0; i < n; i++ ) {
			count = 0;
			while ( count != m ) {
				index = (index + 1) % n;
				if ( flag[index] == 0 ) {
					count++;
					if ( count == m ) {
						flag[index] = 1;
					}
				}
			}
		}
		for ( int j = 0; j < n; j++ ) {
			if ( flag[j] == 0 ) {
				printf("%d\n", j + 1);
				break;
			}
		}
		scanf("%d", &n);
		scanf("%d", &m);
	}
	return 0;
}*/

//2-7

