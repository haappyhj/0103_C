#include<stdio.h>

int main() {

	//�迭�� 5���� ������ �Է¹ް� ���� �� ��պ��� ū ���� ���

	int scores[5];

	for (int k = 0; k < (sizeof(scores) / sizeof(int)); k++) {
		printf("%d��° ������ �Է�:", k ); 
		scanf_s("%d", &scores[k]);
	}
	
	
	int sum = 0;
	for (int k = 0; k < (sizeof(scores) / sizeof(int)); k++) {
		sum += scores[k];
	}
		double avg = (double)sum / (sizeof(scores) / sizeof(int));


		if (int k = 0; i< (sizeof(scores) / sizeof(int);i++) {
			if(avg<scores[i]) printf("%d\n",num[k]);
		}
	

	// 




	return 0;
}