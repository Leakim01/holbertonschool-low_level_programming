#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]);
int append_text_to_file(const char *filename, char *text_content);
#endif
