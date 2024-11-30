#include <stdio.h>
#include <sys/stat.h>
#include <pthread.h>
#include <sys/wait.h>
#include <stdlib.h>

#define ISspace(x) isspace((int)(x))

#define SERVER_STRING "Server: Hyastar's http/0.1.0\r\n"

void *accept_request(*void client);




