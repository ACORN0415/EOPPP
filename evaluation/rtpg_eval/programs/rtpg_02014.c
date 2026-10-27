int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2014[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 14;
    int v2 = 70;
    int v3 = 38;
    int v4 = 60;
    int v5 = 1;
    int v6 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_2014[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
