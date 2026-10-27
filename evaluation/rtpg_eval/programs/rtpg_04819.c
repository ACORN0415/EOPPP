int test_func(void) {
    int v0 = 72;
    int v1 = 61;
    int v2 = 68;
    int v3 = 23;
    int v4 = 15;
    int i;
    v0 = v0 * 10;
    if (v1 > v4) { v1 = v4; }
    v1 = 61;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
