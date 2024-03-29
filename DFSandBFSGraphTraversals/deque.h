#ifndef DEQUE_H
#define DEQUE_H

/*
 * Provided Skeleton File
 * Author: Sean Moore
 */

typedef void* Type;
typedef struct Link Link;
typedef struct Deque Deque;

struct Link
{
    Type value;
    Link* next;
    Link* prev;
};

struct Deque
{
    int size;
    Link* sentinel;
};

Deque* dequeNew();
void dequeDelete(Deque* deque);
void dequePushFront(Deque* deque, Type value);
void dequePushBack(Deque* deque, Type value);
Type dequeFront(Deque* deque);
Type dequeBack(Deque* deque);
void dequePopFront(Deque* deque);
void dequePopBack(Deque* deque);
int dequeIsEmpty(Deque* deque);
void dequeClear(Deque* deque);

#endif

