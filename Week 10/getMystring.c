//getMystring.c
#include<stdio.h>

#define MAX_CH 20

int getMystring(char buffer[], int limit);

int main(void) {
	char input_string[MAX_CH];
	int state; //����ڿ��� �ִ� MAX_CH������ �Է� �ްڴٰ� ������.

	state = getMystring(input_string, MAX_CH);

	if (state) printf("iinput: %s\n", input_string);
	else printf("ionput: %s -> out of range\n", input_string);


	
	return 0;
}
int getMystring(char buffer[], int limit) {
	int i;
	for (int i = 0; i < limit; i++) {
		buffer[i] = getchar();
		if (buffer[i] == '\n') {
			buffer[i] = 0; //[ENTER] Ű ��ġ�� 0�� �־ ���ڿ��� �ϼ���.
			return 1; //���������� �Է��� �Ϸ��.
		}
	}
	buffer[i] = 0;
	rewind(stdin);
	return 0;//�Է� �ʰ� ������ �߻������� �˸�. 
}

void isCancled(char input_string[]) {
	//��ȯ���� NULL�� �ƴ϶�� ���ڿ��� �Է�
	//�޾Ƽ� input_string �� ������
	if (NULL != gets(input_string)) {
		//getMystring()
		printf("input: %s\n", input_string);
	}
	else {
		printf("input -> Cancled!\n");
	}
}