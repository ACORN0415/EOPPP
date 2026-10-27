int __arr_6133[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 34;
    int v2 = 39;
    int v3 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_6133[i] = v0 + i; }
    if (v1 > v2) { v1 = v2; }
    v3 = v3 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v0 = v0 ^ v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
