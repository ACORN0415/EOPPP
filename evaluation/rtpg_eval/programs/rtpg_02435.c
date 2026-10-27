int __arr_2435[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 73;
    int v2 = 88;
    int v3 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_2435[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
