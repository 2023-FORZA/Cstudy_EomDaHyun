// 백준 10825
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[11];
    int korean;
    int english;
    int math;
};

int compare(const void* a, const void* b) {
    struct Student* studentA = (struct Student*)a;
    struct Student* studentB = (struct Student*)b;

    if (studentA->korean != studentB->korean) {
        return studentB->korean - studentA->korean;
    }
    else if (studentA->english != studentB->english) {
        return studentA->english - studentB->english;
    }
    else if (studentA->math != studentB->math) {
        return studentB->math - studentA->math;
    }
    else {
        return strcmp(studentA->name, studentB->name);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    qsort(students, N, sizeof(struct Student), compare);

    for (int i = 0; i < N; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}
