int __arr_1274[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 92;
    int v2 = 28;
    int v3 = 62;
    int v4 = 11;
    int v5 = 37;
    int v6 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_1274[i] = v1 + i; }
    v6 = 95;
    if (v3 > v5) { v3 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
