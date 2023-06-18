#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() {
	int i, j, k,  num, S=0, B=0 ;
	int rand_Ball[3], randnum[3];
	int user_Ball[3];


		srand((unsigned)time(NULL));
		while (randnum[0] == randnum[1] || randnum[0] == randnum[2] || randnum[1] == randnum[2]) {
			randnum[0] = rand() %  9 + 1;
			randnum[1] = rand() %  9 + 1;
			randnum[2] = rand() %  9 + 1;
		}
		
		for (i = 1; i <= 10; i++) {
			S = 0;
			B = 0;
			printf("3자리 숫자 입력 : "); scanf_s("%1d%1d%1d", &user_Ball[0], &user_Ball[1], &user_Ball[2]);
			for (j = 0; j <= 2; j++) {
				for (k = 0; k <= 2; k++) {
					if (randnum[j] == user_Ball[k]) {
						if (j == k) {
							S++;
							if (S>=3) {
								printf("승리");
								return 0;
							}
						}
						else {
							B++;
						}

					}
				}
			}
			printf("%dS ", S);
			printf("%dB\n", B);
		}
		printf("실패");


		return 0;
}