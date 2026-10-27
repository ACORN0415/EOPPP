int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8922[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 29;
    int v2 = 62;
    int v3 = 78;
    int v4 = 34;
    int v5 = 45;
    int v6 = 62;
    int i;
    v0 = 38;
    for (i = 0; i < 10; i++) { __arr_8922[i] = v1 + i; }
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
