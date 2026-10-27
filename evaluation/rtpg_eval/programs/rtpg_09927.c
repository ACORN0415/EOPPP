int test_func(void) {
    int v0 = 93;
    int v1 = 85;
    int v2 = 69;
    int v3 = 38;
    int v4 = 59;
    int v5 = 7;
    int i;
    v4 = v4 * 9;
    v1 = 85;
    v5 = v5 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
