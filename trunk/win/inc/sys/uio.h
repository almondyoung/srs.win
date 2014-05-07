#ifndef _UIO_H
#define _UIO_H

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct iovec
{
	void*   iov_base;  /*!< Base address */
	size_t  iov_len;    /*!< Number of bytes referenced */
};

typedef struct iovec iovec;
typedef int ssize_t;

ssize_t readv(int fd,struct iovec const*  vector, int count);
ssize_t writev(int fd, struct iovec const*  vector,int count);

#ifdef __cplusplus
}
#endif

#endif