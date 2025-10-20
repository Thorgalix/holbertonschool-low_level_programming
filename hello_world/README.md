0.Preprocessor = gcc -E "$CFILE" -o c
1.Compiler = gcc -c "$CFILE" -o "${CFILE%.C}.o"
2.Assembler = gcc -S "$CFILE" -o "${CFILE%.c}.s"
3.Name = gcc $CFILE -o cisfun
4.Hello, puts = int main (void) puts
5.Hello, printf = int main (void) printf \n
6.Size=printf("Size of a char: %zu bytes\n", sizeof(char));
