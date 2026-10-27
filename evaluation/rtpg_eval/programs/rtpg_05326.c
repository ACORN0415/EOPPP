int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5326[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 0;
    int v2 = 48;
    int v3 = 12;
    int v4 = 81;
    int v5 = 38;
    int v6 = 64;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_5326[i] = v7 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    if (v5 > v6) { v5 = v6; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v4 = __helper(v4);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
