#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>

#define MAXSIZE 100

typedef int ElementType;
typedef int Position;

typedef int Position;
typedef struct LNode *PtrToLNode;

struct LNode {
    ElementType Data[MAXSIZE];
    Position Last;
};
typedef PtrToLNode List;

Position SequentialSearch(List Tbl, ElementType K) { /* 在顺序存储的表Tbl中查找关键字为K的数据元素 */
    Position i;

    Tbl->Data[0] = K; /*建立哨兵*/
    for (i = Tbl->Last; Tbl->Data[i] != K; i--)
        ;
    return i; /* 查找成功返回数据元素所在单元下标；查找不成功返回0 */
}

int main(int argc, char *argv[]) {

    List L = malloc(sizeof(struct LNode));
    L->Last = MAXSIZE - 1;
    L->Data[0] = 0;
    L->Data[1] = 1;
    L->Data[2] = 12;
    L->Data[3] = 13;
    L->Data[4] = 15;
    L->Data[5] = 10;
    L->Data[6] = 9;
    L->Data[7] = 3;
    L->Data[8] = 6;
    L->Data[9] = 2;
    for (int i = 10; i < MAXSIZE; i++) {
        L->Data[i] = -1;
    }
    
    ElementType target = 10;
    
    Position index = SequentialSearch(L, target);
    printf("index: %d\n", index);

    return 0;
}