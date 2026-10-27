int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 82;
    int v2 = 29;
    int v3 = 46;
    int v4 = 12;
    int v5 = 10;
    int v6 = 7;
    int i;
    for (i = 0; i < 8; i++) {
        v6 = v6 + v1;
    }
    v6 = __helper(v6);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
