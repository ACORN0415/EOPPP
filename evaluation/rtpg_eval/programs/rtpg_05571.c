int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 70;
    int v2 = 41;
    int v3 = 81;
    int i;
    v1 = v1 * 8;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v3 = __helper(v3);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
