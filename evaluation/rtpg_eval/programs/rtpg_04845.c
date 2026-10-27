int __arr_4845[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 35;
    int v2 = 17;
    int v3 = 66;
    int v4 = 50;
    int v5 = 90;
    int v6 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_4845[i] = v1 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
