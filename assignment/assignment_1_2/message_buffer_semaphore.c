#include "message_buffer_semaphore.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <sys/types.h>

int shmid;
void *memory_segment=NULL;

int semid;
union semun sem_union;

void init_sem() {
    /*---------------------------------------*/
    /* TODO 1 : init semaphore               */

    {}

    /* TODO 1 : END                          */
    /*---------------------------------------*/
    printf("init semid : %d\n", semid);
}

void destroy_sem() {
    /*---------------------------------------*/
    /* TODO 2 : destroy semaphore            */

    {}

    /* TODO 2 : END                          */
    /*---------------------------------------*/
}

void s_wait() {
    struct sembuf buf;
    buf.sem_num = 0;
    buf.sem_op = -1;
    buf.sem_flg = SEM_UNDO;

    if (semop(semid, &buf, 1) == -1) {
        printf("<s_wait> semop error!\n");
        return ;
    }
}

void s_quit() {
    struct sembuf buf;
    buf.sem_num = 0;
    buf.sem_op = 1;
    buf.sem_flg = SEM_UNDO;

    if (semop(semid, &buf, 1) == -1) {
        printf("<s_quit> semop error!\n");
        return ;
    }
}

/*---------------------------------------------*/
/* TODO 3 : use s_quit() and s_wait()          */
/* (1) clone from assignment 1-1 !!!           */
/* (2) use semaphore                           */
/* (3) report explanation (ex. 2020020000.pdf) */

int init_buffer(MessageBuffer **buffer) {}

int attach_buffer(MessageBuffer **buffer) {}

int detach_buffer() {}

int destroy_buffer() {}

int produce(MessageBuffer **buffer, int sender_id, char *data) {}

int consume(MessageBuffer **buffer, Message **message) {}

int is_empty(MessageBuffer buffer) {}

int is_full(MessageBuffer buffer) {}

/* TODO 4 : END                                */
/*---------------------------------------------*/