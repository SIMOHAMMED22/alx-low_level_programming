Write a script that runs a C file through the preprocessor and save the result into another file. : gcc -E $CFILE -o c
Write a script that compiles a C file but does not link. gcc -c $CFILE
Write a script that generates the assembly code of a C code and save it in an output file. : gcc -S $CFILE -o ${CFILE%.c}.s
Write a script that compiles a C file and creates an executable named cisfun. : gcc $CFILE -o cisfun
