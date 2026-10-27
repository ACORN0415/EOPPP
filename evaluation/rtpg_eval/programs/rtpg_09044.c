int test_func(void) {
    int v0 = 99;
    int v1 = 7;
    int v2 = 1;
    int v3 = 98;
    int v4 = 54;
    int v5 = 52;
    int v6 = 82;
    int v7 = 5;
    int i;
    v3 = v3 * 10;
    v2 = v2 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
