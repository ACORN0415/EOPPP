int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5952[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 21;
    int v2 = 89;
    int v3 = 98;
    int v4 = 32;
    int v5 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_5952[i] = v4 + i; }
    if (v2 > v1) { v2 = v1; }
    v5 = __helper(v5);
    v2 = v2 % (v5 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
