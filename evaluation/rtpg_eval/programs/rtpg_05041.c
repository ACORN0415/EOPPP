int __arr_5041[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 15;
    int v2 = 53;
    int v3 = 88;
    int v4 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_5041[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
