int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 72;
    int v1 = 7;
    int v2 = 8;
    int v3 = 6;
    int v4 = 23;
    int v5 = 44;
    int i;
    if (v0 > v5) { v0 = v5; }
    for (i = 0; i < 19; i++) {
        v5 = v5 + v1;
    }
    v2 = v2 * 6;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v5 = __helper(v5);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
