int __arr_6632[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 77;
    int v2 = 11;
    int v3 = 98;
    int v4 = 40;
    int v5 = 17;
    int v6 = 79;
    int v7 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_6632[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
