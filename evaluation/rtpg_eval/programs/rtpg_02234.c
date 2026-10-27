int __arr_2234[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 60;
    int v2 = 24;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_2234[i] = v1 + i; }
    v2 = 26;
    v0 = v0 ^ v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
