#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netdb.h>


const char APRESSMESSAGE[] = "APRESS for professionals\n";

int main(int argc, char *argv[]) {


    int simpleSocket = 0;
    int simplePort = 0;


    /* check we got port num */


    if (2 != argc) {
    

        fprintf(stderr, "Usage: %s <port>\n", argv[0]);
        exit(1);


    }


    /* create streaming socket, simpleSocket gets file descriptor num */
    simpleSocket = socket(AF_INET, SOCK_STREAM, IPPORTO_TCP);

    if (simpleSocket == -1) {


        fprintf(stderr, "fail\n");
        exit(1);

    }
    else {
        fprintf(stderr, "success\n");
    }

}


    

