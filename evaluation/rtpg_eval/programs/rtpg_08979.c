int __arr_8979[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 36;
    int v2 = 21;
    int v3 = 98;
    int v4 = 81;
    int v5 = 3;
    int v6 = 57;
    int v7 = 80;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_8979[i] = v4 + i; }
    v2 = v2 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
