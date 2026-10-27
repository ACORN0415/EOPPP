int test_func(void) {
    int v0 = 44;
    int v1 = 8;
    int v2 = 2;
    int v3 = 94;
    int v4 = 22;
    int v5 = 39;
    int v6 = 34;
    int i;
    v1 = v1 + v3;
    v0 = 85;
    v4 = v4 & v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
