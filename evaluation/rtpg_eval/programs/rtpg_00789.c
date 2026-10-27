int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_789[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 90;
    int v2 = 50;
    int v3 = 62;
    int v4 = 98;
    int v5 = 90;
    int v6 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_789[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
