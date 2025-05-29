#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 11 // 10个口袋 + 1个哨兵位

// 顺序表定义
typedef int ElementType; // 钥匙类型

typedef struct LNode *Position;
typedef struct LNode *List;

typedef struct LNode {
    ElementType KeyNumber; // 存储口袋中的钥匙
    Position Next;         // 指向下一个节点
    Position Last;         // 指向上一个节点
} *PtrToNode;              // 顺序表指针类型

// 创建顺序表
List CreateList() {
    List L = (List)malloc(sizeof(struct LNode));
    if (L == NULL) {
        printf("内存分配失败！\n");
        exit(1);
    }
    L->Next = NULL;
    L->Last = NULL; // 初始化为空表
    return L;
}

// 在顺序表中添加钥匙
void AddKey(List L, ElementType key) {
    PtrToNode node = (PtrToNode)malloc(sizeof(struct LNode));
    node->KeyNumber = key;
    node->Next = NULL;
    node->Last = NULL;

    PtrToNode tailNode = L;
    while (tailNode->Next != NULL) {
        tailNode = tailNode->Next;
    }
    tailNode->Next = node;
    node->Last = tailNode;
}

/*
// 带哨兵的顺序查找
Position SequentialSearchWithSentinel(PtrToNode last, ElementType target) {
    // 设置哨兵：将要找的钥匙放入0号位置
    L->Data[0] = target;

    Position pos = L->Last; // 从最后一个有效位置开始查找

    // 倒着查找：从后往前扫描口袋
    while (L->Data[pos] != target) {
        pos--;
    }

    return pos; // 返回找到的位置
}
*/

// 打印顺序表内容
void PrintList(List L) {
    PtrToNode node = L->Next;
    while (node != NULL) {
        printf("%d ", node->KeyNumber);
        node = node->Next;
    }
    printf("\n");
}

int main() {
    // 1. 创建顺序表（小明的口袋集合）
    List pockets = CreateList();

    // 2. 添加10把钥匙到1-10号口袋
    int keys[] = {3, 7, 2, 9, 5, 1, 8, 4, 6, 10};
    for (int i = 0; i < 10; i++) {
        AddKey(pockets, keys[i]);
    }
    
    PtrToNode last = pockets;
    while (last->Next != NULL) {
        last = last->Next;
    }

    printf("===== 小明找钥匙（带哨兵顺序查找） =====\n");
    PrintList(pockets);

    /*
    // 3. 设置要查找的钥匙
    ElementType targetKey = 5;
    printf("\n🔍 开始查找 %d 号钥匙...\n", targetKey);

    // 4. 执行带哨兵的查找
    Position foundPos = SequentialSearchWithSentinel(pockets, targetKey);

    // 5. 显示查找结果
    if (foundPos == 0) {
        printf("🚫 结果：没有找到 %d 号钥匙！\n", targetKey);
    } else {
        printf("✅ 结果：在 %d 号口袋找到了 %d 号钥匙！\n", foundPos, targetKey);
    }

    // 6. 测试查找不存在的钥匙
    ElementType missingKey = 11;
    printf("\n🔍 开始查找 %d 号钥匙（不存在）...\n", missingKey);
    foundPos = SequentialSearchWithSentinel(pockets, missingKey);

    if (foundPos == 0) {
        printf("🚫 结果：没有找到 %d 号钥匙！\n", missingKey);
    } else {
        printf("❌ 错误：在 %d 号口袋找到了 %d 号钥匙！\n", foundPos, missingKey);
    }

    // 7. 释放内存
    free(pockets);
*/
    return 0;
}