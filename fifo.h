/**
 *  @file 
 *
 *  @brief A simple FIFO, whose elements are pairs of integers,
 *      one representing the producer and the other the value produced
 *
 *  The following operations are defined:
 *     \li insertion of a value
 *     \li retrieval of a value.
 *
 * \author (2016) Artur Pereira <artur at ua.pt>
 */


/**
 * \brief Init the fifo 
 */
void  MyFIFOInit(void);

/**
 *  \brief Insertion of a value into the FIFO.
 * \param value value to be stored
 */
void MyFIFOInsert(unsigned int value);

/**
 *  \brief Retrieval of a value from the FIFO.
 * \param valuep pointer to recipient where to store the value 
 */
void MyFIFORemove (unsigned int  *valuep);

#endif /* __SO_IPC_PRODUCER_CONSUMER_FIFO_ */
