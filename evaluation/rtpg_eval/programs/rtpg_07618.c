int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 33;
    int v2 = 24;
    int v3 = 60;
    int v4 = 69;
    int v5 = 81;
    int v6 = 90;
    int v7 = 94;
    int i;
    if (v3 > v7) { v3 = v7; }
    v5 = __helper(v5);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
