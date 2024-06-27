#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char stack[51];
int top = 0;

int isVPS(char*);

void push(char);
char pop();
int isEmpty();

int main() {

    int t;
    char str[51];

    int i;

    scanf("%d", &t); // t개의 데이터 수를 입력한다.

    for (i = 0; i < t; i++) {
        scanf("%s", str); // PS를 입력받는다.

        if (isVPS(str)) printf("YES\n"); // VPS이면 YES 출력
        else printf("NO\n");             // VPS가 아니면 NO 출력
    }

    return 0;
}

int isVPS(char* str) {

    int res = 1;

    int i;

    for (i = 0; str[i]; i++) {

        if (str[i] == '(') { // 여는 괄호라면?
            push(str[i]);    // push 한다.
        }
        else {

            if (isEmpty()) { // 스택이 비어있다면?
                res = 0;  // result = false
                break;
            }
            else {
                pop(); // LIFO
            }
        }
    }

    if (!isEmpty()) res = 0; // 문자열 처리가 끝난 후에도 스택에 요소가 남아있다면 result = false

    // 스택을 비운다.
    while (!isEmpty()) {
        pop();
    }

    return res;
}

void push(char c) {
    stack[top++] = c;
}

char pop() {
    return stack[--top];
}

int isEmpty() {
    return top == 0;
}
