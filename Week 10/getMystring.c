//getMystring.c
#include<stdio.h>

#define MAX_CH 20

int getMystring(char buffer[], int limit);

int main(void) {
	char input_string[MAX_CH];
	int state; //사용자에게 최대 MAX_CH까지만 입력 받겠다고 제한함.

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
			buffer[i] = 0; //[ENTER] 키 위치에 0을 넣어서 문자열을 완성함.
			return 1; //정상적으로 입력이 완료됨.
		}
	}
	buffer[i] = 0;
	rewind(stdin);
	return 0;//입력 초과 현상이 발생했음을 알림. 
}

void isCancled(char input_string[]) {
	//반환값이 NULL이 아니라면 문자열을 입력
	//받아서 input_string 에 저장함
	if (NULL != gets(input_string)) {
		//getMystring()
		printf("input: %s\n", input_string);
	}
	else {
		printf("input -> Cancled!\n");
	}
}