int test_func(void) {
    int v0 = 96;
    int v1 = 77;
    int v2 = 31;
    int i;
    v2 = v2 - v1;
    v2 = 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
