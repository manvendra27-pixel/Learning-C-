#include <stdio.h>

int main() {
    char x = '$', y = 'b';
    //The ASCII value of smalle a and b is 97 and 98 respectively. So the sum of x and y will be 195.
    // and, the sum of character values can be add even if not initialized by any number becasue each alphasbet symbol has a corrosponding ASCII value. So, the sum of x and y will be 195 and possible.

    int z = x + y;

    printf("%d %d %d", x, y, z);

    return 0;
    
}