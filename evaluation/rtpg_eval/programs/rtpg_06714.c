int __arr_6714[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 61;
    int v2 = 46;
    int v3 = 80;
    int v4 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_6714[i] = v4 + i; }
    v0 = v0 - v4;
    v2 = v2 ^ v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
