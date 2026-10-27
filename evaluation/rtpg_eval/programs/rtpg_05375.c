int test_func(void) {
    int v0 = 39;
    int v1 = 33;
    int v2 = 97;
    int v3 = 73;
    int v4 = 4;
    int v5 = 66;
    int i;
    v2 = v2 - v5;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    v4 = v4 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
