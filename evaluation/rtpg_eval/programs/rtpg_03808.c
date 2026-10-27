int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3808[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 98;
    int v2 = 79;
    int v3 = 87;
    int v4 = 38;
    int v5 = 58;
    int v6 = 56;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_3808[i] = v5 + i; }
    v5 = v5 ^ v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
