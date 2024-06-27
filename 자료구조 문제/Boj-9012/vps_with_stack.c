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

    scanf("%d", &t); // t���� ������ ���� �Է��Ѵ�.

    for (i = 0; i < t; i++) {
        scanf("%s", str); // PS�� �Է¹޴´�.

        if (isVPS(str)) printf("YES\n"); // VPS�̸� YES ���
        else printf("NO\n");             // VPS�� �ƴϸ� NO ���
    }

    return 0;
}

int isVPS(char* str) {

    int res = 1;

    int i;

    for (i = 0; str[i]; i++) {

        if (str[i] == '(') { // ���� ��ȣ���?
            push(str[i]);    // push �Ѵ�.
        }
        else {

            if (isEmpty()) { // ������ ����ִٸ�?
                res = 0;  // result = false
                break;
            }
            else {
                pop(); // LIFO
            }
        }
    }

    if (!isEmpty()) res = 0; // ���ڿ� ó���� ���� �Ŀ��� ���ÿ� ��Ұ� �����ִٸ� result = false

    // ������ ����.
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
