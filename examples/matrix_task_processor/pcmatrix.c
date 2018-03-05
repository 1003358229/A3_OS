/*
 *  Matrix Task Processor
 *  Based on Operating Systems: Three Easy Pieces by R. Arpaci-Dusseau and A. Arpaci-Dusseau
 * 
 *  Assignment 3 code
 *  Program operates on tasks submitted to the tasks_input directory
 *  Results are created in the tasks_output directory
 *
 *  A bounded buffer is used to store pending tasks
 *  A producer thread reads tasks from the tasks_input directory 
 *  Consumer threads perform tasks in parallel
 *  Program is designed to run as a daemon (i.e. forever) until receiving a request to exit.
 *
 *  This program mimics the client/server processing model without the use of any networking constructs.
 *
 *  Wes J. Lloyd
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 *  Spring 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include "matrix.h"
#include "tasks.h"
#include "pcmatrix.h"

int main (int argc, char * argv[])
{
	// Uncomment to see example operation of the readtasks() routine
	// readtasks((void *)100);  

	// Uncomment to see example operation of the dotasks() routine
	// dotasks((void *) NULL);

	// To do
	// Use pthreads
	// Create one pthread for readtasks()
	//
	// Create one or more pthreads for dotasks()
	
	// pthread_mutex_init(&mutex, NULL);
    // pthread_cond_init(&empty, NULL);
    // pthread_cond_init(&fill, NULL);
	pthread_t thid1;
	pthread_t thid2;
	pthread_t thid3;
	int  ret1;
	int  ret2;
	int  ret3;
	printf("\n\n\n\n0.0\n\n\n\n");
	int i = pthread_create(&thid1, NULL, readtasks, (void *)100);
	printf("\n\n\n\n1. %d\n\n\n\n",i);
	int j = pthread_create(&thid2, NULL, dotasks, NULL);
	printf("\n\n\n\n2. %d\n\n\n\n",j);
	int k = pthread_create(&thid3, NULL, dotasks, NULL);
	printf("\n\n\n\n3. %d\n\n\n\n",k);
	pthread_join(thid1, (void**)&ret1);
	pthread_join(thid2, (void**)&ret2);
	pthread_join(thid3, (void**)&ret3);
}
