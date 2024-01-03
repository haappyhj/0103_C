#include<stdio.h>

int main() {

	//int this_week_tempers[7] = {21,16,20,18,19,21,22};
	//int coffee_prices[4] = { 2000,3000,3500,3500 };
	//printf("%d\n", sizeof(coffee_prices)/sizeof(int)); //정수가 4개니까 16 나옴

	//printf("이번주 일요일 온도:%d\n", this_week_tempers[0]);

	//printf("첫번째 커피 가격:%d\n", coffee_prices[0]);
	//printf("두번째 커피 가격:%d\n", coffee_prices[1]);
	//printf("세번째 커피 가격:%d\n", coffee_prices[2]);
	//printf("네번째 커피 가격:%d\n", coffee_prices[3]);

	//for (int i = 0; sizeof(coffee_prices) / sizeof(int); i++) {

	//	printf("%d.번째 커피 가격:%d\n",i+1,coffee_prices[i]);
	//}

	//int heights[] = { 155,160,165,186,192 };
	//int weights[7];
	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++){ //[]안 값이 매번 달라지니까 sizeof(int)로 나눠주기
	//	int weight;
	//	printf("%d번째 몸무게를 입력:", i + 1);
	//	scanf_s("%d", &weight);
	//	weights[i] = weight;
	//}

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	printf("%d번째 몸무게는 %d입니다.\n", i + 1, weights[i]);
	//}

	int scores[5];
	int sum = 0;

	for (int k = 0; k <(sizeof(scores)/sizeof(int)) ; k++) {
		printf("%d번째 점수를 입력:", k+1); //k+1을 왜 써야 하는가?
		scanf_s("%d",&scores[k]);
	}

	for (int k = 0; k < (sizeof(scores) / sizeof(int)); k++) {
		sum += scores[k];
	}

	double avg = (double)sum / (sizeof(scores) / sizeof(int));
	printf("평균은 %.2lf입니다.\n", avg);
	

	
	return 0;
}
