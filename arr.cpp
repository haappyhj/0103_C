#include<stdio.h>

int main() {

	//int this_week_tempers[7] = {21,16,20,18,19,21,22};
	//int coffee_prices[4] = { 2000,3000,3500,3500 };
	//printf("%d\n", sizeof(coffee_prices)/sizeof(int)); //������ 4���ϱ� 16 ����

	//printf("�̹��� �Ͽ��� �µ�:%d\n", this_week_tempers[0]);

	//printf("ù��° Ŀ�� ����:%d\n", coffee_prices[0]);
	//printf("�ι�° Ŀ�� ����:%d\n", coffee_prices[1]);
	//printf("����° Ŀ�� ����:%d\n", coffee_prices[2]);
	//printf("�׹�° Ŀ�� ����:%d\n", coffee_prices[3]);

	//for (int i = 0; sizeof(coffee_prices) / sizeof(int); i++) {

	//	printf("%d.��° Ŀ�� ����:%d\n",i+1,coffee_prices[i]);
	//}

	//int heights[] = { 155,160,165,186,192 };
	//int weights[7];
	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++){ //[]�� ���� �Ź� �޶����ϱ� sizeof(int)�� �����ֱ�
	//	int weight;
	//	printf("%d��° �����Ը� �Է�:", i + 1);
	//	scanf_s("%d", &weight);
	//	weights[i] = weight;
	//}

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	printf("%d��° �����Դ� %d�Դϴ�.\n", i + 1, weights[i]);
	//}

	int scores[5];
	int sum = 0;

	for (int k = 0; k <(sizeof(scores)/sizeof(int)) ; k++) {
		printf("%d��° ������ �Է�:", k+1); //k+1�� �� ��� �ϴ°�?
		scanf_s("%d",&scores[k]);
	}

	for (int k = 0; k < (sizeof(scores) / sizeof(int)); k++) {
		sum += scores[k];
	}

	double avg = (double)sum / (sizeof(scores) / sizeof(int));
	printf("����� %.2lf�Դϴ�.\n", avg);
	

	
	return 0;
}
