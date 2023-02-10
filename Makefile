all: output

output: main.c
    gcc $^ -o $@
