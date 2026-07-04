#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int fd;
    char buf[4096];
    ssize_t n;

    fd = open("sample.txt", O_RDONLY);
    if (fd < 0) {
        return 1;
    }

    n = read(fd, buf, 4095);
    if (n < 0){
        return 1;
    }

    buf[n] = '\0';
    printf("%s\n", buf);

    close(fd);
    return 0;
}