int __arr_5938[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 22;
    int v2 = 78;
    int v3 = 95;
    int v4 = 36;
    int v5 = 74;
    int v6 = 38;
    int v7 = 77;
    int i;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 18; i++) {
        v7 = v7 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_5938[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
