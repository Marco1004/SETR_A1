/**
 * \file test.c
 *
 * \brief Testar o bom funcionamento do fifo
 *
 *O fifo vai ser testado num processo "self-explanatory"
 *
 * \author Daniel Almeida 85111
 * \date 22 Mar 2022
 */

#include <stdio.h>
#include "fifo.h"

int main(int fifo_size)
{
	// Init Test
	printf("Fifo vai inicializar\n");
	MyFIFOInit();
	printf("Fifo inicializou\n");
	MyFIFOSize();
	printf("Vou tentar remover sem ter nada\n");
	MyFIFORemove();

	// Add Test
	printf("Vou adicionar um elemento\n");
	MyFIFOInsert(5);
	MyFIFOSize();
	printf("Vou adicionar mais dois elementos\n");
	MyFIFOInsert(4);
	MyFIFOInsert(2);

	MyFIFOSize();
	MyFIFOPeep();
	MyFIFOSize();
	printf("Se o size continuou igual ainda bem!\n");
	
	//Remove & Add Test
	printf("Vou remover um elemento\n");
	MyFIFORemove();
	MyFIFOSize();
	MyFIFOPeep();
	printf("Vou remover outro elemento\n");
	MyFIFORemove();
	printf("Vou adicionar um elemento\n");
	MyFIFOInsert(1);
	MyFIFOPeep();
	printf("Remover 1 outra vez\n");
	MyFIFORemove();
	MyFIFOPeep();
	printf("Remover o ultimo\n");
	MyFIFORemove();
	MyFIFOPeep();

	// Add more than Size
	MyFIFOInsert(1);
	MyFIFOInsert(2);
	MyFIFOInsert(3);
	MyFIFOInsert(4);
	MyFIFOInsert(5);
	MyFIFOInsert(6);
	MyFIFOInsert(7);

	//Remove more than Size after add more than size
	MyFIFOSize();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOPeep();
	MyFIFORemove();
	MyFIFOSize();

	printf("Acabou o teste!\n");


	return 0;
}