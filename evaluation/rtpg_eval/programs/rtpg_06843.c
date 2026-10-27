int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 42;
    int v2 = 22;
    int v3 = 37;
    int v4 = 77;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 * 8;
    v1 = v1 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = __helper(v3);
    v3 = v3 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
