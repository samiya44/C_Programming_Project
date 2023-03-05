//DECISION MAKING
//Check Alphabet or not
/*To understand this example, you should have the knowledge of the following C programming topics:

C Programming Operators
C if...else Statement
*/
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}

/*In C programming, a character variable holds an ASCII value (an integer number between 0 and 127) rather than that character itself.

The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90.

If the ASCII value of the character entered by the user lies in the range of 97 to 122 or from 65 to 90, that number is an alphabet.

In the program, 'a' is used instead of 97 and 'z' is used instead of 122. Similarly, 'A' is used instead of 65 and 'Z' is used instead of 90.*/
