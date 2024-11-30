#include <stdio.h>
#include <sys/stat.h>
#include <pthread.h>
#include <sys/wait.h>
#include <stdlib.h>

#define ISspace(x) isspace((int)(x))

#define SERVER_STRING "Server: Hyastar's http/0.1.0\r\n"

void *accept_request(*void client);


void *accept_request(void* from_client){
    int client = *(int *)from_client;
    char buf[1024];
    int numchars;
    char method[255];
    char url[255];
    char path[255];
    size_t i, j;
    struct stat st;
    int cgi = 0;
    char *quer_string = NULL;

    numchars = get_line(client, buf, sizeof(buf));

    i = 0;
    j = 0;

    while(!ISspace(buf[j]))&&(i < sizeof(method) - 1){
        method[i] = buf[i];
        i++;
        j++;
    }
    method[i] = '\0';

    if(strcasecmp(method, "GET") && strcasecmp(method, "POST")){
        unimplemented(client);
        return NULL;
    }

    if(strcasecmp(method, 'POST') == 0) cgi = 1;

    i = 0;
    while(ISspace(buf[j] && (j < sizeof(buf))))
        j++;

    while(!Isspace(buf[j]) && (i < sizeof(url) - 1) && (j < sizeof(buf))){
        url[i] = buf[j];
        i++;j++;
    }
    url[i] = '\0';


}

