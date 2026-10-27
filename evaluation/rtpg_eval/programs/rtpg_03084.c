int __arr_3084[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 81;
    int v2 = 99;
    int v3 = 51;
    int v4 = 97;
    int v5 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_3084[i] = v5 + i; }
    v4 = 16;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
