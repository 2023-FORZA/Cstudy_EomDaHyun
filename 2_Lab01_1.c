//백준 2684
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int count[8] = {0};
        char s[40];
        scanf("%s", s);
        
        for (int i = 0; i < 38; i++) {
            char sub[4];
            strncpy(sub, s + i, 3);
            sub[3] = '\0';
            
            if (strcmp(sub, "TTT") == 0) count[0]++;
            else if (strcmp(sub, "TTH") == 0) count[1]++;
            else if (strcmp(sub, "THT") == 0) count[2]++;
            else if (strcmp(sub, "THH") == 0) count[3]++;
            else if (strcmp(sub, "HTT") == 0) count[4]++;
            else if (strcmp(sub, "HTH") == 0) count[5]++;
            else if (strcmp(sub, "HHT") == 0) count[6]++;
            else if (strcmp(sub, "HHH") == 0) count[7]++;
        }
        
        for (int i = 0; i < 8; i++) {
            printf("%d", count[i]);
            if (i < 7) printf(" ");
            else printf("\n");
        }
    }
    
    return 0;
}
