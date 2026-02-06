#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
    
        while (str[i] == ' ')
            i++;

        start = i;

        
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Reversed word by word string:\n%s", str);

    return 0;
}