//checkAge.c
#include<stdio.h>

int main(void) {
	int age = 0;

	//�������� ���̸� �Է��� ������ �ݺ��ϱ�
	while (1) {
		printf("Input age: ");
		//scanf �Լ��� ���࿡ �����ϸ� 0�� ��ȯ��
		if (scanf_s("%d", &age)) {
			rewind(stdin); //������ ���ѹݺ���
			printf("Only digits allowed!\n");
		}
		else {
			// 0~130���� ���ڸ� �������� ���̷� ������
			if (age > 0 && age <= 130) {
				break;
			}
			else {
				printf("Incorrent age! Try again!\n");
			}
		}
	}
	printf("Your age: %d\n", age);
}