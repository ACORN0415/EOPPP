int test_func(void) {
    int v0 = 81;
    int v1 = 78;
    int v2 = 94;
    int v3 = 72;
    int i;
    v0 = v0 * 4;
    if (v2 > v0) { v2 = v0; }
    v2 = v2 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
