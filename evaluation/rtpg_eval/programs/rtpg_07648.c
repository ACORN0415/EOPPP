int __arr_7648[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 46;
    int v2 = 96;
    int v3 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_7648[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
