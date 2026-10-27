int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 61;
    int v2 = 76;
    int v3 = 91;
    int v4 = 47;
    int v5 = 32;
    int v6 = 72;
    int v7 = 56;
    int i;
    v5 = v5 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
