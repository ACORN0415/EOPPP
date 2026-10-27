int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 38;
    int v2 = 10;
    int v3 = 32;
    int v4 = 2;
    int v5 = 91;
    int i;
    v3 = v3 + v1;
    v1 = 82;
    v5 = __helper(v5);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
