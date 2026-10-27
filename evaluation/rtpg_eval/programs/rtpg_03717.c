int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3717[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 72;
    int v2 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_3717[i] = v1 + i; }
    v2 = v2 * 6;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
