int test_func(void) {
    int v0 = 38;
    int v1 = 30;
    int v2 = 64;
    int v3 = 84;
    int v4 = 30;
    int v5 = 21;
    int i;
    v4 = 44;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
