#include<stdio.h>

int main() {

	//배열에 5개의 정수를 입력받고 저장 뒤 평균보다 큰 정수 출력

	int scores[5];

	for (int k = 0; k < (sizeof(scores) / sizeof(int)); k++) {
		printf("%d번째 정수를 입력:", k ); 
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