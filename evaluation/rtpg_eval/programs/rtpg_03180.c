int test_func(void) {
    int v0 = 72;
    int v1 = 97;
    int v2 = 41;
    int v3 = 88;
    int v4 = 72;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
