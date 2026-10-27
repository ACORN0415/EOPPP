int test_func(void) {
    int v0 = 44;
    int v1 = 90;
    int v2 = 91;
    int v3 = 5;
    int v4 = 48;
    int v5 = 85;
    int v6 = 54;
    int i;
    v0 = 57;
    v3 = v3 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
