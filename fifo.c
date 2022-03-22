#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <errno.h>

#include "fifo.h"

#define  FIFOSZ         5

typedef struct ITEM
{
    unsigned int value;  ///< value stored
} ITEM;

typedef struct FIFO
{ 
    unsigned int ii;   ///< point of insertion
    unsigned int ri;   ///< point of removal
    unsigned int cnt;  ///< number of items stored
    ITEM slot[FIFOSZ];  ///< FIFO size
} FIFO;

/** \brief internal storage region of FIFO type */
static FIFO fifo;

/* Initialization of the FIFO */
void MyFIFOInit(void)
{
    unsigned int i;
    for (i = 0; i < FIFOSZ; i++)
    {
        fifo.slot[i].value = 99999999;
    }
    fifo.ii = fifo.ri = 0;
    fifo.cnt = 0;
}


void MyFIFOInsert(unsigned int value)
{
    if (fifo.cnt>= FIFOSZ){
        printf("FIFO is full.");
    }
    fifo.slot[fifo.ii].value = value;
    fifo.ii = fifo.ii + 1;
    fifo.cnt++;
}

void MyFIFORemove (unsigned int * valuep)
{
    if(fifo.cnt<= 0){
        printf("FIFO is empty.");
    }
    *valuep = fifo.slot[fifo.ri].value;
    fifo.slot[fifo.ri].value = 99999999;
    fifo.ri = fifo.ri + 1;
    fifo.cnt--;
}

/* ************************************************* */
