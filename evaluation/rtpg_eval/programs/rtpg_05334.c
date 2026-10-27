int test_func(void) {
    int v0 = 73;
    int v1 = 81;
    int v2 = 79;
    int i;
    v0 = v0 * 7;
    v1 = 7;
    if (v0 > v2) { v0 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
