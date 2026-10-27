int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 89;
    int v2 = 5;
    int v3 = 92;
    int v4 = 0;
    int v5 = 94;
    int v6 = 73;
    int v7 = 0;
    int i;
    if (v6 > v2) { v6 = v2; }
    v6 = 5;
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
