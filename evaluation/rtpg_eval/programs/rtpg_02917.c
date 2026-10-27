int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 30;
    int v2 = 99;
    int v3 = 48;
    int i;
    v2 = v2 + v0;
    v1 = v1 - v2;
    v0 = __helper(v0);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
