int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9525[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 18;
    int v2 = 28;
    int v3 = 31;
    int v4 = 70;
    int v5 = 14;
    int v6 = 16;
    int v7 = 89;
    int i;
    v5 = 2;
    for (i = 0; i < 10; i++) { __arr_9525[i] = v0 + i; }
    v2 = v2 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
