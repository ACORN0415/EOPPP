int test_func(void) {
    int v0 = 46;
    int v1 = 47;
    int v2 = 53;
    int v3 = 92;
    int v4 = 97;
    int v5 = 46;
    int v6 = 12;
    int v7 = 16;
    int i;
    v7 = 66;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
