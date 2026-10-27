int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 25;
    int v1 = 81;
    int v2 = 89;
    int v3 = 47;
    int v4 = 100;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v3;
    }
    v1 = v1 + v1;
    v4 = v4 * 2;
    int *__p = &v4;
    *__p = *__p + 1;
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
