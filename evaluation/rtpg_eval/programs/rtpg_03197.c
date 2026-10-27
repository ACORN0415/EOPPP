int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3197[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 85;
    int v2 = 58;
    int v3 = 76;
    int i;
    for (i = 0; i < 10; i++) { __arr_3197[i] = v3 + i; }
    v1 = 10;
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
