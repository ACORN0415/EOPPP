int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8564[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 59;
    int v2 = 92;
    int v3 = 37;
    int v4 = 21;
    int i;
    v3 = 2;
    for (i = 0; i < 10; i++) { __arr_8564[i] = v2 + i; }
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
