int __arr_2864[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 2;
    int v2 = 48;
    int v3 = 8;
    int v4 = 68;
    int v5 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_2864[i] = v4 + i; }
    v3 = v3 - v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
