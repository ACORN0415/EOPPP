int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 68;
    int v2 = 34;
    int i;
    v2 = v2 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
