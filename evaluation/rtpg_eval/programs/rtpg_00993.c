int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 42;
    int v1 = 50;
    int v2 = 99;
    int i;
    v2 = v2 * 6;
    if (v0 > v0) { v0 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
