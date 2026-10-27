int __arr_1002[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 62;
    int v2 = 65;
    int v3 = 7;
    int v4 = 38;
    int v5 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_1002[i] = v5 + i; }
    v1 = 92;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
