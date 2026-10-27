int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9955[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 75;
    int v2 = 1;
    int v3 = 34;
    int v4 = 39;
    int v5 = 28;
    int v6 = 61;
    int v7 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_9955[i] = v6 + i; }
    if (v5 > v5) { v5 = v5; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v2 = __helper(v2);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
