/*
 *  pcmatrix module
 *  Primary module providing control flow for the pcMatrix program
 * 
 *  Creates producer and consumer threads and launches them to produce matrices
 *  and consume matrices.  Each thread produces a total sum of the value of
 *  randomly generated elements.  Producer sum and consumer sum must match.
 *
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 *  Fall 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>
#include <time.h>
#include "matrix.h"
#include "counter.h"
#include "prodcons.h"
#include "pcmatrix.h"

int main (int argc, char * argv[])
{
  time_t t;
  int numw = NUMWORK;

  // Seed the random number generator with the system time
  srand((unsigned) time(&t));

  printf("Producing %d %dx%d matrices.\n",LOOPS, ROW, COL);
  printf("Using a shared buffer of size=%d\n", MAX);
  printf("With %d producer and consumer threads.\n",numw);

  pthread_t pr;
  pthread_t co;

  int prs = 0;
  int cos = 0;

  printf("Produced = Consumed --> %d = %d\n",prs,cos);
  return 0;
}
