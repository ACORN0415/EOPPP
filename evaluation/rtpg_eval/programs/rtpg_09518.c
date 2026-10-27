int __arr_9518[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 73;
    int v2 = 36;
    int v3 = 26;
    int v4 = 49;
    int v5 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_9518[i] = v1 + i; }
    for (i = 0; i < 13; i++) {
        v3 = v3 + v5;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
