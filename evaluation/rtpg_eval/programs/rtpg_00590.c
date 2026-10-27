int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 24;
    int v1 = 45;
    int v2 = 34;
    int v3 = 44;
    int v4 = 30;
    int i;
    v4 = v4 * 2;
    v4 = __helper(v4);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
