0.Preprocessor = gcc -E "$CFILE" -o c
1.Compiler = gcc -c "$CFILE" -o "${CFILE%.C}.o"
2.Assembler = gcc -S "$CFILE" -o "${CFILE%.c}.s"
