int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 73;
    int v2 = 91;
    int v3 = 86;
    int v4 = 4;
    int v5 = 87;
    int v6 = 96;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v6;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __helper(v3);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
