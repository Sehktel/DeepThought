#include <stdio.h>
int main (int argc, char* argv[]) {
  if (argc > 1) {
    short int a;
    sscanf (argv[1], "%hi", &a);
    bool flag = false;
    if ( a == 42 ){
        if (flag) printf("Here is the flag{6 × 9 = 42(13)}\n");

        } else { printf("I'm thinking...\n"); }
    } 
        else { printf("The Ultimate Question of Life, the Universe, and Everything\n"); }
    return 0;
}
