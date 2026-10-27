int test_func(void) {
    int v0 = 97;
    int v1 = 60;
    int v2 = 63;
    int v3 = 78;
    int v4 = 100;
    int v5 = 4;
    int v6 = 95;
    int v7 = 14;
    int i;
    v6 = v6 * 8;
    if (v7 > v2) { v7 = v2; }
    v2 = v2 - v7;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
