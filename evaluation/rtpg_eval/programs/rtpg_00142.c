int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 42;
    int v2 = 34;
    int v3 = 58;
    int v4 = 93;
    int v5 = 43;
    int v6 = 54;
    int i;
    v5 = v5 * 7;
    v5 = v5 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
