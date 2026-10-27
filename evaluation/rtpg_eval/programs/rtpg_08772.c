int test_func(void) {
    int v0 = 13;
    int v1 = 31;
    int v2 = 97;
    int v3 = 35;
    int v4 = 81;
    int v5 = 63;
    int v6 = 37;
    int i;
    v5 = v5 * 5;
    v3 = v3 - v0;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
