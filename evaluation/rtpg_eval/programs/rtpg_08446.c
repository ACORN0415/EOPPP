int test_func(void) {
    int v0 = 24;
    int v1 = 56;
    int v2 = 51;
    int v3 = 14;
    int v4 = 76;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 12; i++) {
        v4 = v4 + v3;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
