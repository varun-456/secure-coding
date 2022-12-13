#include <stdio.h>

int main() {
    // Write C code here
    char x, y; 
    x = -128; 
    y = -x; 
    if (x == y) puts("1"); 
    if ((x - y) == 0) puts("2"); 
    if ((x + y) == 2 * x) puts("3"); 
    if (x != -y) puts("4"); 


    return 0;
}
