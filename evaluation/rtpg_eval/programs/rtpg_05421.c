int __arr_5421[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 82;
    int v2 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_5421[i] = v0 + i; }
    v2 = 62;
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
