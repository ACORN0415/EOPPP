int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4063[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 68;
    int v2 = 40;
    int v3 = 13;
    int v4 = 28;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_4063[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = __helper(v3);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
