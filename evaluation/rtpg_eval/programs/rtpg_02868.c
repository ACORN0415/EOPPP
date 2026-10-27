int test_func(void) {
    int v0 = 71;
    int v1 = 63;
    int v2 = 3;
    int v3 = 65;
    int v4 = 72;
    int v5 = 57;
    int v6 = 8;
    int v7 = 73;
    int i;
    if (v1 > v5) { v1 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
