/*
 *  Signal example 
 *  Based on Operating Systems: Three Easy Pieces by R. Arpaci-Dusseau and A. Arpaci-Dusseau
 * 
 *  This example uses locks and a condition to synchronize a child thread and
 *  the parent.  The child generates matrices and the parent computes the
 *  average when the matrix is ready for processing.
 *
 *  Wes J. Lloyd
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 *  Fall 2016
 */

// Include libraries required for this module only
#include <stdio.h>
#include <pthread.h>
#include "counter.h"

// SYNCHRONIZED COUNTER METHOD IMPLEMENTATION

