int test_func(void) {
    int v0 = 12;
    int v1 = 33;
    int v2 = 25;
    int v3 = 63;
    int i;
    v2 = v2 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
