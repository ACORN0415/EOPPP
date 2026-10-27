int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 57;
    int v1 = 0;
    int v2 = 28;
    int i;
    v1 = 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
