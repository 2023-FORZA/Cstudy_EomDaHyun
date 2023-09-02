//백준 9012
#include <stdio.h>
#include <string.h>

// 스택 구조체 정의
struct Stack {
    int top;
    char items[51]; // 괄호 문자열의 최대 길이는 50이므로 +1
};

// 스택 초기화 함수
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// 스택이 비어있는지 확인하는 함수
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// 스택이 꽉 차있는지 확인하는 함수
int isFull(struct Stack *stack) {
    return stack->top == 50;
}

// 스택에 요소를 추가하는 함수
void push(struct Stack *stack, char item) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = item;
    }
}

// 스택에서 요소를 제거하고 반환하는 함수
char pop(struct Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    }
    return '\0'; // 빈 스택인 경우 빈 문자 반환
}

// 올바른 괄호 문자열(VPS) 여부를 판단하는 함수
int isVPS(char *str) {
    struct Stack stack;
    initialize(&stack);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char current = str[i];

        if (current == '(') {
            push(&stack, current);
        } else if (current == ')') {
            if (isEmpty(&stack)) {
                return 0; // 스택이 비어있으면 올바른 VPS가 아님
            }
            pop(&stack);
        }
    }

    return isEmpty(&stack); // 스택이 비어있어야 올바른 VPS
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char str[51];
        scanf("%s", str);

        if (isVPS(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
