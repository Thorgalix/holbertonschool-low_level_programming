0.Preprocessor = gcc -E "$CFILE" -o c
1.Compiler = gcc -c "$CFILE" -o "${CFILE%.C}.o"