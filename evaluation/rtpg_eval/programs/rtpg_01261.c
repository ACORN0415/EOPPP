int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 44;
    int v1 = 31;
    int v2 = 11;
    int i;
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
