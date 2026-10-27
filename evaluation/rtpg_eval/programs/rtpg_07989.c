int test_func(void) {
    int v0 = 6;
    int v1 = 47;
    int v2 = 10;
    int v3 = 65;
    int v4 = 67;
    int v5 = 35;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
