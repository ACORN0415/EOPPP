int test_func(void) {
    int v0 = 10;
    int v1 = 71;
    int v2 = 19;
    int v3 = 5;
    int v4 = 54;
    int v5 = 5;
    int i;
    v0 = 19;
    if (v4 > v1) { v4 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
