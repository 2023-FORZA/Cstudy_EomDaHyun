//백준 1925
#include <stdio.h>

int main() {
    int ax, ay, bx, by, cx, cy, da2, db2, dc2, p = 0;
    scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
    da2 = (bx - cx) * (bx - cx) + (by - cy) * (by - cy);
    db2 = (cx - ax) * (cx - ax) + (cy - ay) * (cy - ay);
    dc2 = (ax - bx) * (ax - bx) + (ay - by) * (ay - by);
    bx -= ax;
    cx -= ax;
    by -= ay;
    cy -= ay;
    ax = 0;
    ay = 0;

    if (bx * cy == by * cx) {
        printf("X");
    } else {
        if (da2 == db2 && db2 == dc2) {
            printf("JungTriangle");
        } else {
            if (da2 == db2 || db2 == dc2 || dc2 == da2) {
                p = 1;
            }
            if (da2 + db2 < dc2 || db2 + dc2 < da2 || dc2 + da2 < db2) {
                if (!p) {
                    printf("DunkakTriangle");
                } else {
                    printf("Dunkak2Triangle");
                }
            } else if (da2 + db2 == dc2 || db2 + dc2 == da2 || dc2 + da2 == db2) {
                if (!p) {
                    printf("JikkakTriangle");
                } else {
                    printf("Jikkak2Triangle");
                }
            } else {
                if (!p) {
                    printf("YeahkakTriangle");
                } else {
                    printf("Yeahkak2Triangle");
                }
            }
        }
    }
    return 0;
}
