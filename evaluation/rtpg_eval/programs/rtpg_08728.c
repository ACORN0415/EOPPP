int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 59;
    int v1 = 53;
    int v2 = 84;
    int v3 = 27;
    int v4 = 52;
    int v5 = 38;
    int v6 = 40;
    int i;
    v0 = v0 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v1 = __helper(v1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
