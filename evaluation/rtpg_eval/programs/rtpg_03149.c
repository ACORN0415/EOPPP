int __arr_3149[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 46;
    int v2 = 38;
    int v3 = 85;
    int v4 = 68;
    int v5 = 9;
    int v6 = 54;
    int v7 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_3149[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
