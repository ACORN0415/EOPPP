int test_func(void) {
    int v0 = 84;
    int v1 = 93;
    int v2 = 32;
    int v3 = 25;
    int v4 = 15;
    int v5 = 100;
    int v6 = 88;
    int v7 = 50;
    int i;
    v6 = v6 * 7;
    for (i = 0; i < 14; i++) {
        v7 = v7 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
