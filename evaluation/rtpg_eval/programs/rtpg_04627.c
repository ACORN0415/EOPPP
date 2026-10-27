int __arr_4627[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 39;
    int v2 = 37;
    int v3 = 15;
    int v4 = 11;
    int v5 = 37;
    int v6 = 82;
    int i;
    v1 = v1 + v5;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_4627[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
