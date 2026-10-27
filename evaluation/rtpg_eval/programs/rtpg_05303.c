int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 30;
    int v1 = 46;
    int v2 = 52;
    int v3 = 82;
    int v4 = 67;
    int v5 = 10;
    int i;
    v3 = 61;
    v5 = v5 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__p = &v4;
    *__p = *__p + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
