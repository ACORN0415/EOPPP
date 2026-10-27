int test_func(void) {
    int v0 = 3;
    int v1 = 21;
    int v2 = 61;
    int v3 = 2;
    int v4 = 12;
    int v5 = 59;
    int v6 = 40;
    int i;
    v0 = v0 + v1;
    v2 = v2 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
