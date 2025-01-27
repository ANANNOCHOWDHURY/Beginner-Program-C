#include <stdio.h>

int main() {
    char ch;
    printf("Enter a single character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an Alphabet\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    else {
        printf("%c is a Special character\n", ch);
    }

    return 0;
}
