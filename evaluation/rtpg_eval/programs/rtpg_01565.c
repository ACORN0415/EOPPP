int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 11;
    int v1 = 48;
    int v2 = 88;
    int v3 = 58;
    int v4 = 62;
    int v5 = 24;
    int v6 = 74;
    int i;
    v6 = v6 * 5;
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
