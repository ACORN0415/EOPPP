int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 81;
    int v1 = 55;
    int v2 = 72;
    int v3 = 64;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    v0 = __helper(v0);
    v2 = v2 % (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
