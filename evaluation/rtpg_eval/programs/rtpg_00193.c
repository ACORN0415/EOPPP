int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_193[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 14;
    int v2 = 40;
    int v3 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_193[i] = v2 + i; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v3;
    }
    v2 = v2 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
