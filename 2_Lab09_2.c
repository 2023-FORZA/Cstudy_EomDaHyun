//백준 2607
#include <stdio.h>
#include <string.h>

#define MAX_LEN 11
#define MAX_WORDS 100

int main() {
    int n;
    scanf("%d", &n);
    
    char base[MAX_LEN];
    scanf("%s", base);

    int alpha[26] = {0};
    int base_len = strlen(base);
    
    for (int i = 0; i < base_len; i++) {
        alpha[base[i] - 'A'] += 1;
    }

    int count = 0;
    char comp[MAX_LEN];

    for (int i = 0; i < n - 1; i++) {
        scanf("%s", comp);
        int comp_len = strlen(comp);
        int ccopy[26];
        
        for (int j = 0; j < 26; j++) {
            ccopy[j] = alpha[j];
        }

        int same = 0;
        for (int j = 0; j < comp_len; j++) {
            if (ccopy[comp[j] - 'A'] > 0) {
                ccopy[comp[j] - 'A']--;
                same++;
            }
        }

        if (base_len == comp_len) {
            if (same == base_len || same == base_len - 1) {
                count++;
            }
        }
        else if (base_len - 1 == comp_len && same == base_len - 1) {
            count++;
        }
        else if (base_len + 1 == comp_len && same == base_len) {
            count++;
        } else {
            continue;
        }
    }
    
    printf("%d\n", count);

    return 0;
}
