#include<stdio.h>

int main() {
	 //����1 
	//int N;
	//scanf_s("%d", &N);
	//int sum = 0;
	//for (int t = 1; t <= N; t++) {

	//	sum+=t; //t ����!

	//}
	//printf("%d",sum);

	//����2
	int sum = 0;
	int count = 0;


	while (1) {
		int num;
		printf("���� �Է�:");
		scanf_s("%d", &num);
		if (100 < num) continue;
		else if (num <=0) break;
		else {
			count++;
			sum += num;
		}

	}
	double avg = ((double)sum / (double)count); //����ȯ���ֱ�
	printf("��:%d ���:%.2lf ����:%d", sum, avg, count);




	return 0;
}