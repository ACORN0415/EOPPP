int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7298[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 95;
    int v2 = 63;
    int v3 = 74;
    int v4 = 54;
    int v5 = 48;
    int v6 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_7298[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
