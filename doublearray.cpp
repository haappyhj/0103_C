#include<stdio.h>

int main() {

	int score[4][3] = {

		{80,90,85},
		{80,75,85},
		{80,95,85},
		{80,70,90},
	};

	//   c c++ java  //���� 4, ���� 3
	//a 20  30  40
	//b 30
	//c 32
	//d 24
	

	/*int sum = 0;
	for (int i = 0;  i < 4; i++) {
		printf("%d��°�� ����", i);
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			printf("%d", sum/3);
		}
		printf("\n");
	}*/

	for (int j = 0; j < 3; j++) { //��ġ ��� ��� �� �� ����� ���� �� �ִ�!
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += score[i][j];

		}
		printf("avg:%2.lf", sum / 3.0);
	}








	return 0;
}
