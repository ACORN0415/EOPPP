int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 41;
    int v2 = 70;
    int v3 = 21;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    v3 = v3 + v1;
    v1 = __helper(v1);
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
