#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int remove_file(const char *filename);
int copy_file(const char *filename, const char *filename2);
int move_file(const char *filename, const char *filename2);
int rename_file(const char *filename, const char *filename2);
int truncate_file(const char *filename, size_t length);
int create_dir(const char *dirname);
int remove_dir(const char *dirname);
int change_dir(const char *dirname);
int change_dir_back(void);
int change_dir_home(void);

#endif
