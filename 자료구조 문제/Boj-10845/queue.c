#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 10000

void enqueue(int);
void dequeue();
void size();
void isEmpty();
void front();
void rear();

int q[N];
int start = 0, end = 0, count = 0;

int main() {
    int n, in;
    char a[6];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", a);

        if (!strcmp(a, "push")) {
            scanf("%d", &in);
            enqueue(in);
        }

        else if (!strcmp(a, "pop"))
            dequeue();
        else if (strcmp(a, "size") == 0)
            size();
        else if (strcmp(a, "empty") == 0)
            isEmpty();
        else if (strcmp(a, "front") == 0)
            front();
        else if (strcmp(a, "back") == 0)
            rear();
    }
    return 0;
}

// ť�� ��� ����
void enqueue(int a) {
    q[end++] = a;
    ++count;
}

// ť�� ��� ����
void dequeue() {
    if (count != 0) {
        printf("%d\n", q[start++]);
        --count;
    }
    else
        printf("-1\n");
}

// ť�� ��� ����
void size() {
    printf("%d\n", count);
}

// ť�� ����ִ°�?
void isEmpty() {
    if (count == 0)
        printf("1\n");
    else
        printf("0\n");
}

// ť�� �� �� ��� ���
void front() {
    if (count != 0)
        printf("%d\n", q[start]);
    else
        printf("-1\n");
}

// ť�� �� �� ��Ҹ� ���
void rear() {
    if (count != 0)
        printf("%d\n", q[end - 1]);
    else
        printf("-1\n");
}
