int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 47;
    int v2 = 33;
    int v3 = 17;
    int v4 = 10;
    int v5 = 57;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v1;
    }
    v4 = v4 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
