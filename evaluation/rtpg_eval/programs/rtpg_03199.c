int __arr_3199[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 61;
    int v2 = 3;
    int v3 = 32;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_3199[i] = v3 + i; }
    v1 = v1 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
