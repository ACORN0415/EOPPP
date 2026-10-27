int test_func(void) {
    int v0 = 69;
    int v1 = 10;
    int v2 = 18;
    int v3 = 11;
    int v4 = 33;
    int v5 = 49;
    int v6 = 33;
    int v7 = 55;
    int i;
    v6 = 55;
    v5 = v5 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
