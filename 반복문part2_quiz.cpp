#include<stdio.h>

int main() {
	 //문제1 
	//int N;
	//scanf_s("%d", &N);
	//int sum = 0;
	//for (int t = 1; t <= N; t++) {

	//	sum+=t; //t 쓰기!

	//}
	//printf("%d",sum);

	//문제2
	int sum = 0;
	int count = 0;


	while (1) {
		int num;
		printf("숫자 입력:");
		scanf_s("%d", &num);
		if (100 < num) continue;
		else if (num <=0) break;
		else {
			count++;
			sum += num;
		}

	}
	double avg = ((double)sum / (double)count); //형변환해주기
	printf("합:%d 평균:%.2lf 개수:%d", sum, avg, count);




	return 0;
}