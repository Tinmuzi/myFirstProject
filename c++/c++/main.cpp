//
//  main.cpp
//  c++
//
//  Created by 张婧 on 2018/7/10.
//  Copyright © 2018年 张婧. All rights reserved.
//
//
////链表专题
//#include<cstdio>
//#include<cstdlib>
//
////节点结构
//typedef struct LNode{
//    int date;
//    struct LNode *next;
//}Lnode,*LinkList;
//
////读取位置i的数据
//int getDate(LinkList L,int i){
//    LinkList p;
//    p = L;
//    int num = 0;
//    while(p && num <i){
//        p = p -> next;
//        ++num;
//    }
//    if(!p || num > i)
//        return -1;
//    else
//        return p -> date;
//}
//
////头插，含头结点的单链表
//LinkList creatHeadList(){
//    LinkList L = (LinkList)malloc(sizeof(LNode));
//
//    printf("请指明输入的数据数目：\n");
//    int n;
//    scanf("%d",&n);
//
//    L -> next = NULL;
//    for(int i = 0; i < n; i++){
//        int cur;
//        scanf("%d",&cur);
//        LinkList p = (LinkList)malloc(sizeof(LNode));
//        p -> date = cur;
//        p -> next = L -> next;
//        L -> next = p;
//    }
//    return L;
//}
//
////查找数据的前驱结点
//LinkList searchPreviousList(LinkList head,int n){
//    LinkList pre;
//    pre = head;
//    while(pre ->  next -> date != n && pre -> next != NULL){
//        pre = pre -> next;
//    }
//    return pre;
//}
//
//
////删除操作
//LinkList deleteList(LinkList *head){
//    int n;
//    LinkList pre,p;
//    printf("请输入要删除的数据：");
//    scanf("%d",&n);
//
//    pre = searchPreviousList(*head, n);
//    p = pre -> next;
//    pre -> next = pre -> next ->next;
//    free(p);
//
//    return *head;
//}
//
////插入操作
//LinkList insertList(LinkList *head){
//
//    return *head;
//}
//
//
////访问全部数组
//void visit(LinkList L){
//    printf("所访问的数组的数据为：\n");
//    LinkList p;
//    p = L -> next;
//    if(p == NULL) {
//        printf("彭涛涛是傻子！\n");
//        return;
//    }
//    while(p != NULL){
//        printf("%d",p -> date);
//        p = p -> next;
//    }
//    printf("\n");
//}
//
// //循环尾插
//LinkList creatXunHuanList(){
//    LinkList L,p,pre;
//    L =(LinkList)malloc(sizeof(LNode));
//    int num,n,cur;
//
//    printf("请指定循环数组的长度：");
//    scanf("%d",&n);
//
//    printf("请指明输入的数据的数目：");
//    scanf("%d",&num);
//
//    L -> next = NULL;
//    pre = L;
//    for(int i = 0; i < num; i++){
//        scanf("%d",&cur);
//
//        p = (LinkList)malloc(sizeof(LNode));
//        p -> date = cur;
//        p -> next = NULL;
//
//        pre -> next = p;
//        pre = p;
//
//        if(i == n - 1){
//            printf("此时已经达到数组长度上限，将会发生替换！\n");
//            p -> next = L -> next;
//            pre = L;
//            break;
//        }
//        if(num == i){
//            p -> next = L -> next;
//            pre = L;
//        }
//    }
//    if(num > n){
//        for(int i = 0; i < num - n;i++){
//            scanf("%d",&cur);
//            pre -> next -> date = cur;
//            pre = pre ->next;
//        }
//    }
//    return L;
//}
//
////访问循环数组
//void visitXunHuan(LinkList L){
//
//    LinkList p;
//    p = L -> next;
//    if(p == NULL) {
//        printf("彭涛涛是傻子！\n");
//        return;
//    }
//    int n;
//    printf("请输入想要输出的循环数组的数据个数：\n");
//    scanf("%d",&n);
//    printf("所访问的数组的数据为：\n");
//
//    while(n--){
//        printf("%d",p -> date);
//        p = p -> next;
//    }
//    printf("\n");
//}
//
//int main(){
//    LinkList head;
//    head  = creatHeadList();
//    deleteList(&head);
//    visit(head);
//    return 0;
//}

//#include<cstdio>
//#include<cstring>
//int main(){
//    char s[100000];
//    long long n,l;
//    int flag = 1;
//    scanf("%lld",&n);
//    for(int i = 0; i < n;i++){
//        scanf("%s",s);
//        l = strlen(s);
//        flag =1;
//        for(int j = 0; j < l;j++){
//            if(s[j] != s[l - j -1]){
//                printf("no\n");
//                flag = 0;
//                break;
//            }
//        }
//        if(flag == 1){
//            printf("yes\n");
//        }
//    }
//    return 0;
//}






//#define MAxsize 50
//typedef struct{
//    ElemType date[MAxsize];
//    int length;
//}SqList;

//#include<cstdio>
//#define Maxsize 50
//typedef struct{
//    int date[Maxsize];
//    int top;
//}SqStack;
//
////初始化
//void InitStack(SqStack &s){
//    s.top = -1;
//}
//
////判断是否栈空
//bool StackEmpty(SqStack &s){
//    if(s.top == -1)
//        return true;
//    else{
//        return false;
//    }
//}
//
////进栈
//bool Push(SqStack &s,int x){
//    if(s.top == Maxsize - 1){
//        return false;
//    }else{
//        s.date[++s.top] = x;
//        return true;
//    }
//}
//
////出栈
//bool Pop(SqStack &s,int &x){
//    if(s.top == -1){
//        return false;
//    }
//    x = s.date[s.top--];
//    return true;
//}
//
////读栈顶元素
//bool GetTop(SqStack s,int &x){
//    if(s.top == -1){
//        return false;
//    }else{
//        x = s.date[s.top];
//        return true;
//    }
//}
//
//int main(){
//    int n;
//    SqStack s;
//
//    InitStack(s);
//
//    Push(s, 2);
//    Push(s,3);
//
//    GetTop(s, n);
//
//    printf("%d",n);
//
//    Pop(s, n);
//
//    return 0;
//}

//#include<cstdio>
//#include<cstdlib>
//#define MAX 8
//int r[MAX],tot=0;
//
//bool chaeck(int x){
//    for(int i = 0; i < x; i++){
//        if(r[i] == r[x] || x-r[x]==i-r[i] || x+r[x]==i+r[i]){
//            return false;
//        }
//    }
//    return true;
//}
//
//void queen(int x){
//    if(x == MAX){
//        tot++;
//    }else{
//        for(int i = 0; i < MAX; i++){
//            r[x] = i;
//            if(chaeck(x)){
//                printf("r[%d][%d] = %d\n",x,i,r[x]);
//                queen(x+1);
//            }
//        }
//    }
//}
//
//int main(){
//    queen(0);
//    printf("%d",tot);
//    return 0;
//}
//

//#include <cstdio>
//#include <cstdlib>
//typedef struct QNode{
//    int date;
//    struct QNode * next;
//} *QueuePtr;
//
//typedef struct{
//    QueuePtr front;
//    QueuePtr rear;
//}LinkQueue;
//
////初始化队列
//void initQueue(LinkQueue &Q){
//    Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
//    if(!Q.front)
//        printf("没有内存！\n");
//    Q.front -> next = NULL;
//}
//
////销毁队列
//void DestroyQueue(LinkQueue &Q){
//    Q.rear = Q.front -> next;
//    free(Q.front);
//    Q.front = Q.rear;
//}
//
////判断队列是否为空
//bool QueueEmpty(LinkQueue &Q){
//    if(Q.front == Q.rear)
//        return true;
//    else
//        return false;
//}
//
////入队
//void insertQueue(LinkQueue &Q,int x){
//    QueuePtr p;
//    p =(QueuePtr)malloc(sizeof(QNode));
//
//    p -> date = x;
//    p -> next = NULL;
//
//    Q.rear ->next = p;
//    Q.rear = p;
//    printf("插入完成!\n");
//}
//
////删除队首元素，并返回值
//void DeQueue(LinkQueue &Q,int &x){
//    QueuePtr p;
//    if(Q.front == Q.rear)
//        printf("ERROR\n");
//    p = Q.front -> next;
//    x = Q.front -> next -> date;
//    Q.front -> next  = p -> next;
//    if(p == Q.rear)
//        Q.front = Q.rear;
//    free(p);
//}
//
//int main(){
//    int x;
//    LinkQueue head;
//    initQueue(head);
//    insertQueue(head, 1);
//    insertQueue(head, 2);
//    DeQueue(head,x);
//    if(!QueueEmpty(head)){
//        printf("x =%d\n",x);
//    }
//    return 0;
//}
//
//
//
//
//
#include<cstdio>

#include<cstdlib>
typedef struct Node{
    int date;
    struct Node *LeftChild;
    struct Node *RightChild;
}*TreeNode;

TreeNode searchParent(TreeNode root,int n){
    TreeNode p;
    if(root == NULL){
        return root;
    }else{
        
    }
    
    return root;
}






TreeNode insertTreeNode(TreeNode &root){
    TreeNode p,parent;
    int n;
    p = (TreeNode)malloc(sizeof(Node));
    
    printf("请输入要插入的数字：");
    scanf("%d",&n);
    
    parent = searchParent(root,n);
    
    return root;
}











































