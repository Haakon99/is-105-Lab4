#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd, sz;
    char *buf = (char *) calloc(20, sizeof(char));
    fd = open("foo.txt", O_RDONLY);
    if (fd < 0) {
       perror("feil ved lesing af fil"); exit(1);
    }
    sz = read(fd, buf, 12);
    printf("Gjorde et kall til read(%d, buf, 12). Returnerte at %d bytes ble lest.\n", fd, sz);
    printf("Bytes som ble lest var: %s\n", buf);
    close(fd);
}
