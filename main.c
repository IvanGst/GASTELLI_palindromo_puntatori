#include <stdbool.h>
#include <stdio.h>

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char stringa[] = "i topi non avevano nipoti";
    bool palindromo = true;
    char *testa = stringa;
    char *coda = stringa;

    while (*coda != '\0') {
        coda++;
    }
    coda--;

    while (testa < coda) {
        if (*testa == ' ') {
            testa++;
            continue;
        }
        if (*coda == ' ') {
            coda--;
            continue;
        }

        if (*testa != *coda) {
            palindromo = false;
            break;
        }

        testa++;
        coda--;
    }

    if (palindromo) {
        printf("La stringa e un palindromo.\n");
    } else {
        printf("La stringa NON e un palindromo.\n");
    }

    return 0;
}



