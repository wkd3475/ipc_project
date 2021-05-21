#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 100
#define NP_SEND "./server_to_client"
#define NP_RECEIVE "./client_to_server"

int main(void) {
	char receive_msg[BUFFER_SIZE], send_msg[BUFFER_SIZE];
	int receive_fd, send_fd;
	int value;

	/*---------------------------------------*/
	/* TODO 3 : make pipes and init fds      */
	/* (1) make NP_RECEIVE pipe              */
	/* (2) make NP_SEND pipe                 */
	/* (3) init receive_fd and send_fd       */

	{}

	/* TODO 3 : END                          */
	/*---------------------------------------*/

	while (1) {
		/*---------------------------------------*/
		/* TODO 4 : read msg                     */
		
		{}

		/* TODO 4 : END                          */
		/*---------------------------------------*/

		printf("server : receive %s\n", receive_msg);

		value = atoi(receive_msg);

		sprintf(send_msg, "%d", value*value);
		printf("server : send %s\n", send_msg);

		/*---------------------------------------*/
		/* TODO 5 : write msg                    */

		{}

		/* TODO 5 : END                          */
		/*---------------------------------------*/
	}
	return 0;
}
