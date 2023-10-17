//˳��ջ�Ļ�����������ʼ�������룬ɾ��ջ��Ԫ�أ���ȡջ��Ԫ�أ��������ÿ�
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100
//
//typedef struct SqStack {
//    int stacklength;
//    int* base;
//    int* top;
//}SqStack;
//
//void InitStack(SqStack* s) {
//    s->stacklength = 0;
//    s->base = (int*) malloc(sizeof(int) * MAX_SIZE);
//    s->top = s->base;
//}
//
//void Push(SqStack* s, int e) {
//    if (s->stacklength == MAX_SIZE) {
//        printf("˳��ջ�������޷�����\n");
//        return;
//    }
//    *(s->top) = e;
//    s->top++;
//    s->stacklength++;
//}
//
//void DeleteTop(SqStack* s) {
//    s->top--;
//    s->stacklength--;
//}
//
//void Pop(SqStack* s, int* e) {
//    if (s->top == s->base) {
//        printf("ջΪ�գ����ܵ���\n");
//        return;
//    }
//    s->top--;
//    *e = *(s->top);
//    s->stacklength--;
//}
//
//void Print(SqStack* s) {
//    if (s->top == s->base) {
//        printf("ջΪ��\n");
//    }
//    for (int i = 1; i <=s->stacklength ; ++i) {
//        printf("%d ", s->base[i-1]);
//    }
//    printf("\n");
//}
//
//void ClearStack(SqStack* s) {
//    s->top = s->base;
//    s->stacklength = 0;
//}
//
//void DestroyStack(SqStack* s) {
//    free(s->base);
//}
//
//void GetTop(SqStack* s, int* e){
//    *e = *(s->top);
//}
//int main() {
//    SqStack s;
//    InitStack(&s);
//    int e;
//    for (int i = 0; i < 5; ++i) {
//        Push(&s, i);
//        Print(&s);
//    }
//    for (int i = 0; i < 5; ++i) {
//        Pop(&s, &e);
//        Print(&s);
//    }
//    ClearStack(&s);
//    DestroyStack(&s);
//    return 0;
//}









//ջ��Ӧ�ã�����ƥ��
//#include "stdio.h"
//#include "stdlib.h"
//#define MAX_SIZE 100
//
//typedef struct SqStack {
//    int stacklength;
//    char* base;
//    char* top;
//}SqStack;
//
//void InitStack(SqStack* s) {
//    s->stacklength = 0;
//    s->base = (char*) malloc(sizeof(char) * MAX_SIZE);
//    s->top = s->base;
//}
//
//void Push(SqStack* s, char e) {
//    if (s->stacklength == MAX_SIZE) {
//        printf("˳��ջ�������޷�����\n");
//        return;
//    }
//    *(s->top) = e;
//    s->top++;
//    s->stacklength++;
//}
//
//void DeleteTop(SqStack* s) {
//    s->top--;
//    s->stacklength--;
//}
//
//void Pop(SqStack* s, char* e) {
//    if (s->top == s->base) {
//        printf("ջΪ�գ����ܵ���\n");
//        return;
//    }
//    s->top--;
//    *e = *(s->top);
//    s->stacklength--;
//}
//
//void Print(SqStack* s) {
//    if (s->top == s->base) {
//        printf("ջΪ��\n");
//    }
//    for (int i = 1; i <=s->stacklength ; ++i) {
//        printf("%c ", s->base[i-1]);
//    }
//    printf("\n");
//}
//
//void ClearStack(SqStack* s) {
//    s->top = s->base;
//    s->stacklength = 0;
//}
//
//void DestroyStack(SqStack* s) {
//    free(s->base);
//}
//
//void GetTop(SqStack* s, char* e){
//    *e = *(s->top);
//}
//
//int IsRight(SqStack* s, char e) {
//    if (s->top == s->base) {
//        return 0;
//    }
//    if (*(s->top - 1) - e == 1 || *(s->top - 1) - e == -1) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//int main() {
//    SqStack s;
//    InitStack(&s);
//    char a[6];
//    for (int i = 0; i < 6; ++i) {
//        scanf(" %c", &a[i]);
//    }
//    for (int i = 0; i < 6; ++i) {
//        printf("%c ", a[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < 6; ++i) {
//        if (IsRight(&s , a[i])) {
//            DeleteTop(&s);
//        } else {
//            Push(&s, a[i]);
//        }
//    }
//    Print(&s);
//    if (s.top == s.base) {
//        printf("����ƥ��\n");
//    } else {
//        printf("���Ų�ƥ��");
//    }
//    return 0;
//}








//������1��2��3��4.......n��n������������ջ������һ�����У��ж����Ƿ�Ϊһ����ȷ�ĳ�ջ���У��Ƿ��ǳ�ջ��������е�һ�֣�
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100
//
//typedef struct SqStack {
//    int stacklength;
//    int* base;
//    int* top;
//}SqStack;
//
//void InitStack(SqStack* s) {
//    s->stacklength = 0;
//    s->base = (int*) malloc(sizeof(int) * MAX_SIZE);
//    s->top = s->base;
//}
//
//void Push(SqStack* s, int e) {
//    if (s->stacklength == MAX_SIZE) {
//        printf("˳��ջ�������޷�����\n");
//        return;
//    }
//    *(s->top) = e;
//    s->top++;
//    s->stacklength++;
//}
//
//void DeleteTop(SqStack* s) {
//    s->top--;
//    s->stacklength--;
//}
//
//void Pop(SqStack* s, int* e) {
//    if (s->top == s->base) {
//        printf("ջΪ�գ����ܵ���\n");
//        return;
//    }
//    s->top--;
//    *e = *(s->top);
//    s->stacklength--;
//}
//
//void Print(SqStack* s) {
//    if (s->top == s->base) {
//        printf("ջΪ��\n");
//    }
//    for (int i = 1; i <=s->stacklength ; ++i) {
//        printf("%d ", s->base[i-1]);
//    }
//    printf("\n");
//}
//
//void ClearStack(SqStack* s) {
//    s->top = s->base;
//    s->stacklength = 0;
//}
//
//void DestroyStack(SqStack* s) {
//    free(s->base);
//}
//
//void GetTop(SqStack* s, int* e){
//    *e = *(s->top);
//}
//
//int IsRight(SqStack* s, int n, int* sequence) {
//    int temp = 1;
//    Push(s, temp);
//    temp++;
//    for (int i = 0; i < n; ++i) {
//        while (*(s->top - 1) != sequence[i] && temp <= n) {
//            Push(s, temp);
//            temp++;
//        }
//        if (*(s->top - 1) == sequence[i]) {
//            DeleteTop(s);
//        } else {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() {
//    SqStack s;
//    InitStack(&s);
//    int n = 5;
//    int sequence[n];
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &sequence[i]);
//    }
//    if (IsRight(&s, n, sequence)) {
//        printf("�Ϸ�\n");
//    } else {
//        printf("���Ϸ�");
//    }
//
//}