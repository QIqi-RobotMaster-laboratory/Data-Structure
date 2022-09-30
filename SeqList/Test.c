#include <stdio.h>
#include "SeqList.h"


void TestSeqList2(void)
{
    Dynamic_SL sl;
    SeqListInit(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    SeqListPrint(&sl);

    SeqListPushFront(&sl, 10);
    SeqListPushFront(&sl, 20);
    SeqListPushFront(&sl, 30);
    SeqListPrint(&sl);

    SeqListPopFront(&sl);
    SeqListPrint(&sl);

    SeqListInsert(&sl, 4, 100);
    SeqListInsert(&sl, 9, 1999);
    SeqListPrint(&sl);

    SeqListErase(&sl, 1);
    SeqListPrint(&sl);

    SeqListDestory(&sl);    
}
int main()
{
    TestSeqList2();
    return 0;
}