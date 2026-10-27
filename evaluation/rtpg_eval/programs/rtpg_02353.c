int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2353[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 62;
    int v2 = 13;
    int v3 = 21;
    int v4 = 58;
    int i;
    v2 = v2 * 8;
    for (i = 0; i < 10; i++) { __arr_2353[i] = v4 + i; }
    v1 = 22;
    v4 = __helper(v4);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
