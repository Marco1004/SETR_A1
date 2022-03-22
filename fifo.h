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
 *  \brief Insertion of a value into the FIFO.
 * \param value value to be stored
 */
void MyFIFOInsert(unsigned int value);

/**
 *  \brief Retrieval of a value from the FIFO.
 * \param valuep pointer to recipient where to store the value 
 */
void MyFIFORemove (unsigned int  *valuep);

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
