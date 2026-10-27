int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 61;
    int v2 = 77;
    int v3 = 7;
    int v4 = 16;
    int v5 = 51;
    int v6 = 2;
    int v7 = 54;
    int i;
    if (v1 > v7) { v1 = v7; }
    v3 = v3 - v2;
    v0 = __helper(v0);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
