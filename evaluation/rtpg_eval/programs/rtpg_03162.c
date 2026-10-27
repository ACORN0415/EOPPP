int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 44;
    int v2 = 49;
    int v3 = 88;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
