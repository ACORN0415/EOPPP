int __arr_2052[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 64;
    int v2 = 99;
    int v3 = 4;
    int v4 = 69;
    int v5 = 56;
    int v6 = 82;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_2052[i] = v3 + i; }
    v0 = 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
