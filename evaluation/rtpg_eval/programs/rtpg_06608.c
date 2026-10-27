int __arr_6608[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 10;
    int v2 = 16;
    int v3 = 79;
    int v4 = 89;
    int v5 = 36;
    int v6 = 43;
    int v7 = 20;
    int i;
    v3 = v3 + v1;
    v5 = v5 * 6;
    for (i = 0; i < 10; i++) { __arr_6608[i] = v5 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
