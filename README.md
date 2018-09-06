# Get_next_line

## About Gext_next_line

* `get_next_line.c` is a function which allocate memory for put the line which has readed, in a file descriptor, by function. `get_next_line.c` reads line by line. Each call reads and allocates one line of file descriptor

* Prototype is: `int get_next_line(const int fd, char **line)`

* `get_next_line.c` return 1 if function readed something. If the function reads EOF, it's return 0. Else the function return -1. If `malloc` fail in `get_next_line`, return will be -1 too.

* `const int fd`: the file descriptor which is opened before use `get_next_line`

* `**line`: the adress of a pointer `&line` which will be allocate and which will be the line readed.

## What you need to make work get_next_line ?

* [C library](https://en.wikipedia.org/wiki/C_standard_library)

## How works get_next_line ?

```
int main()
{
  char  *line;
  int   fd;
  int   ret_get_next_line; //control the return of function
  
  if ((fd = open("file", O_RDONLY)) < 0)
    return (-1);
  ret_get_next_line = get_next_line(fd, &line);
  printf("%s", line);// print the line readed by get_next_line
}
```
