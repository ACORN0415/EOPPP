int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2533[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 32;
    int v2 = 25;
    int v3 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_2533[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
