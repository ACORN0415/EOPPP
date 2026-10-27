int __arr_2635[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 92;
    int v2 = 78;
    int v3 = 22;
    int v4 = 26;
    int v5 = 3;
    int v6 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_2635[i] = v6 + i; }
    v3 = v3 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v4 = v4 % (v6 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
