//백준 5186
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int location;
    char drunk[2];
} Friend;

typedef struct {
    int location;
    int available;
} Car;

int compareFriends(const void *a, const void *b) {
    Friend *friendA = (Friend *)a;
    Friend *friendB = (Friend *)b;

    if (strcmp(friendA->drunk, friendB->drunk) == 0) {
        return friendA->location - friendB->location;
    }

    return strcmp(friendB->drunk, friendA->drunk);
}

int compareCars(const void *a, const void *b) {
    Car *carA = (Car *)a;
    Car *carB = (Car *)b;

    if (carA->location == carB->location) {
        return carB->available - carA->available;
    }

    return carA->location - carB->location;
}

int sleepPeople(int N, int C, int L, Friend *friends, Car *cars, int driver);

int main() {
    int K;
    scanf("%d", &K);

    for (int cases = 1; cases <= K; cases++) {
        int N, C, L;
        scanf("%d %d %d", &N, &C, &L);

        Friend *friends = (Friend *)malloc(N * sizeof(Friend));
        Car *cars = (Car *)malloc(C * sizeof(Car));

        int driver = 0;
        for (int count = 0; count < N; count++) {
            scanf("%d %s", &friends[count].location, friends[count].drunk);
            if (strcmp(friends[count].drunk, "S") == 0) {
                driver++;
            }
        }

        for (int count = 0; count < C; count++) {
            scanf("%d %d", &cars[count].location, &cars[count].available);
        }

        int sleepPeopleCount = sleepPeople(N, C, L, friends, cars, driver);
        printf("Data Set %d:\n%d\n", cases, sleepPeopleCount);

        free(friends);
        free(cars);
    }

    return 0;
}

int sleepPeople(int N, int C, int L, Friend *friends, Car *cars, int driver) {
    if (C == 0) {
        return N;
    }

    qsort(cars, C, sizeof(Car), compareCars);
    qsort(friends, N, sizeof(Friend), compareFriends);

    int *available = (int *)calloc(L + 1, sizeof(int));
    int *ride = (int *)calloc(N, sizeof(int));

    int rideDriver = 0;
    for (int i = 0; i < C; i++) {
        Car car = cars[i];
        for (int number = 0; number < driver; number++) {
            if (car.location == friends[number].location && ride[number] == 0) {
                available[car.location] += car.available - 1;
                ride[number] = 1;
                rideDriver++;
                break;
            }
        }
    }

    int count = 0;
    for (int number = 0; number < N; number++) {
        Friend friend = friends[number];
        if (available[friend.location] > 0 && ride[number] == 0) {
            available[friend.location]--;
        } else {
            count++;
        }
    }

    free(available);
    free(ride);

    return count - rideDriver;
}
