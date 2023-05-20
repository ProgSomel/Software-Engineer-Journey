#include <stdio.h>

    
    //  return_type name(parameter)
    // {
    //     code
    //     return what?
    // }

    int sum(int x, int y);

    int main() {

        printf("%d", sum(10, 5));
        return 0;
    }
    int sum (int x, int y) {
         int sum = x+y;
         return sum;
    }
