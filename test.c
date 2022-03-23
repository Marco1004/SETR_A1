/**
 * @file
 *
 * @brief Testar o bom funcionamento do fifo
 *
 *	O fifo vai ser testado num processo "self-explanatory"
 *
 * \author Marco Santos 83192, Daniel Almeida 85111
 * \date 22 Mar 2022
 */

#include <stdio.h>
#include "fifo.h"

/**
 * \brief main test function 
 */
int main()
{
	// Init Test
	printf("Fifo vai inicializar\n");
	MyFIFOInit();
	printf("Fifo inicializou\n");
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("\n");

	// Remove Test
	printf("Vou tentar remover sem ter nada\n");
	MyFIFORemove();
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("\n");


	// Add Test
	printf("Vou adicionar um elemento(5)\n");
	MyFIFOInsert(5);
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("Vou adicionar mais dois elementos (4)e depois(2)\n");
	MyFIFOInsert(4);
	MyFIFOInsert(2);

	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("Se o size continuou igual ainda bem!\n");
	printf("\n");

	
	//Remove & Add Test
	printf("Vou remover um elemento\n");
	MyFIFORemove();
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("Vou remover outro elemento\n");
	MyFIFORemove();
	printf("Vou adicionar um elemento(1)\n");
	MyFIFOInsert(1);
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("Remover 1 outra vez\n");
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("Remover o ultimo\n");
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	printf("\n");

	// Add more than Size
	MyFIFOInsert(1);
	MyFIFOInsert(2);
	MyFIFOInsert(3);
	MyFIFOInsert(4);
	MyFIFOInsert(5);
	MyFIFOInsert(6);
	MyFIFOInsert(7);
	printf("Fiz 7 inserts seguidos, 2 têm que dar erro\n");
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());
	printf("\n");

	//Remove more than Size after add more than size
	
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Return do Peep:%d \n",MyFIFOPeep());
	MyFIFORemove();
	printf("Size ocupado do fifo:%d \n",MyFIFOSize());

	printf("Acabou o teste!\n");


	return 0;
}