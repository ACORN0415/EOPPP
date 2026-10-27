int test_func(void) {
    int v0 = 92;
    int v1 = 4;
    int v2 = 21;
    int v3 = 4;
    int v4 = 87;
    int v5 = 25;
    int v6 = 83;
    int i;
    v2 = 76;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v6;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
