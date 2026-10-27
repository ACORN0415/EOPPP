int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1651[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 35;
    int v2 = 30;
    int v3 = 36;
    int v4 = 66;
    int v5 = 92;
    int i;
    v5 = v5 + v0;
    for (i = 0; i < 10; i++) { __arr_1651[i] = v4 + i; }
    v4 = v4 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
