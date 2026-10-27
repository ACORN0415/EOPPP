int test_func(void) {
    int v0 = 13;
    int v1 = 39;
    int v2 = 50;
    int v3 = 63;
    int v4 = 48;
    int v5 = 81;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
