int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 53;
    int v1 = 9;
    int v2 = 14;
    int v3 = 16;
    int v4 = 19;
    int i;
    v4 = 74;
    if (v3 > v4) { v3 = v4; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
