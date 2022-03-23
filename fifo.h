/**
 *  @file 
 *
 *  @brief A simple FIFO.
 *
 *  The following operations are defined:
 *     \li insertion of a value
 *     \li retrieval of a value.
 *
 * \author Marco Santos 83192, Daniel Almeida 85111
 */


/**
 * \brief Init the fifo 
 */
void  MyFIFOInit(void);

/**
 *  \brief Adds an element to the FIFO
 * \param value value to be stored
 */
void MyFIFOInsert(unsigned int value);

/**
 *  \brief Removes and element from the FIFO
 */
void MyFIFORemove (void);

/**
 * @brief Returns the oldest element on the FIFO, but does not remove it
 * 
 * @return int 
 */
int MyFIFOPeep(void);

/**
 * @brief Returns the number of elements on the FIFO
 * 
 * @return int 
 */
int MyFIFOSize(void);
