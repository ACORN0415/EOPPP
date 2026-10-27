int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 59;
    int v2 = 21;
    int i;
    v2 = v2 + v2;
    v0 = v0 * 7;
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
