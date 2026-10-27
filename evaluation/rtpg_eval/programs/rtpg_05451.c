int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 44;
    int v1 = 40;
    int v2 = 100;
    int v3 = 86;
    int v4 = 85;
    int v5 = 36;
    int i;
    v4 = v4 - v5;
    v0 = v0 * 9;
    v4 = v4 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
