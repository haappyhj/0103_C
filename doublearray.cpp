#include<stdio.h>

int main() {

	int score[4][3] = {

		{80,90,85},
		{80,75,85},
		{80,95,85},
		{80,70,90},
	};

	//   c c++ java  //행이 4, 열이 3
	//a 20  30  40
	//b 30
	//c 32
	//d 24
	

	/*int sum = 0;
	for (int i = 0;  i < 4; i++) {
		printf("%d번째의 정수", i);
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			printf("%d", sum/3);
		}
		printf("\n");
	}*/

	for (int j = 0; j < 3; j++) { //역치 행렬 써야 각 언어별 평균을 구할 수 있다!
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += score[i][j];

		}
		printf("avg:%2.lf", sum / 3.0);
	}








	return 0;
}
