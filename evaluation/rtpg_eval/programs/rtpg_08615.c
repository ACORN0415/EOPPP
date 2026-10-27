int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 88;
    int v2 = 9;
    int v3 = 25;
    int v4 = 0;
    int v5 = 40;
    int i;
    v4 = v4 - v5;
    v4 = 68;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v5 = __helper(v5);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
