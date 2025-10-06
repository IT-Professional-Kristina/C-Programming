#include <stdio.h>

int main() {
    printf("Hello World!")
    return 0;
}
// This is to show a syntax error has occured 
// =Building project:[ syntax_errors - Debug ]==========
make[1]: Entering directory '/cygdrive/c/Users/kankr/workspace/learnc++/Preprocessor_directive_#pragma/syntax_errors'
C:/cygwin64/bin/gcc.exe -c  "C:/Users/kankr/workspace/learnc++/Preprocessor_directive_#pragma/syntax_errors/main.c" -O0 -gdwarf-2 -std=c99 -Wall  -o ../build-Debug/syntax_errors/main.c.o -I. -I.
C:/Users/kankr/workspace/learnc++/Preprocessor_directive_#pragma/syntax_errors/main.c: In function 'main':
C:/Users/kankr/workspace/learnc++/Preprocessor_directive_#pragma/syntax_errors/main.c:4:27: error: expected ';' before 'return'
    4 |     printf("Hello World!")
      |                           ^
      |                           ;
    5 |     return 0;
      |     ~~~~~~
make[1]: *** [syntax_errors.mk:99: ../build-Debug/syntax_errors/main.c.o] Error 1
make[1]: Leaving directory '/cygdrive/c/Users/kankr/workspace/learnc++/Preprocessor_directive_#pragma/syntax_errors'
make: *** [Makefile:5: All] Error 2
==== build ended with errors (1 errors, 0 warnings) ===
