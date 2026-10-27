int test_func(void) {
    int v0 = 6;
    int v1 = 32;
    int v2 = 87;
    int v3 = 24;
    int v4 = 21;
    int i;
    v1 = v1 - v2;
    v0 = v0 + v4;
    v2 = v2 * 7;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
