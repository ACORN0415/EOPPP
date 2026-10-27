int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 23;
    int v2 = 12;
    int v3 = 81;
    int v4 = 30;
    int v5 = 54;
    int i;
    v3 = v3 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
