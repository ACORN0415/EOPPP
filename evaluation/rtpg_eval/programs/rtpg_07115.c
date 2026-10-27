int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7115[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 43;
    int v2 = 78;
    int v3 = 20;
    int v4 = 9;
    int v5 = 1;
    int i;
    for (i = 0; i < 10; i++) { __arr_7115[i] = v0 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
