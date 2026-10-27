int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 72;
    int v2 = 62;
    int v3 = 54;
    int v4 = 61;
    int v5 = 86;
    int v6 = 32;
    int v7 = 99;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
