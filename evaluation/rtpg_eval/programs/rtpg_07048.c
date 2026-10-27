int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 68;
    int v2 = 34;
    int v3 = 13;
    int v4 = 38;
    int i;
    v3 = v3 - v1;
    v1 = v1 * 6;
    v0 = __helper(v0);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
