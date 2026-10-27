int test_func(void) {
    int v0 = 43;
    int v1 = 29;
    int v2 = 86;
    int v3 = 55;
    int v4 = 58;
    int i;
    v0 = 79;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
