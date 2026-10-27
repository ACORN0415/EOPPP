int __arr_8915[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 46;
    int v2 = 49;
    int v3 = 63;
    int v4 = 61;
    int v5 = 76;
    int v6 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_8915[i] = v6 + i; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v3;
    }
    v5 = 56;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v6 = v6 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
