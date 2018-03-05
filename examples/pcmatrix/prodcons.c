/*
 *  prodcons module
 *  Producer Consumer module
 * 
 *  Implements routines for the producer consumer module based on 
 *  chapter 30, section 2 of Operating Systems: Three Easy Pieces
 *
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 *  Fall 2016
 */

// Include only libraries for this module
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "counter.h"
#include "matrix.h"
#include "pcmatrix.h"
#include "prodcons.h"

// Producer consumer data structures
int ** bigmatrix[MAX];

// Producer consumer locks and conditions

// PRODUCER-CONSUMER put() get()
void put()
{

}

int get() 
{
  return 0;
}

// PRODUCER - return total of all arrays produced
void *prod_worker(void *arg)
{
  return NULL;
}

// CONSUMER - return total of all arrays consumed
void *cons_worker(void *arg)
{
  return NULL;
}

