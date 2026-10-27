int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 32;
    int v2 = 23;
    int v3 = 89;
    int v4 = 3;
    int v5 = 74;
    int v6 = 78;
    int v7 = 4;
    int i;
    v6 = 4;
    v3 = v3 + v2;
    int *__p = &v6;
    *__p = *__p + 1;
    v6 = __helper(v6);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
