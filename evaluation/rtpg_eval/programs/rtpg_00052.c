int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 59;
    int v1 = 30;
    int v2 = 18;
    int v3 = 12;
    int v4 = 34;
    int v5 = 85;
    int v6 = 98;
    int v7 = 80;
    int i;
    if (v1 > v4) { v1 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
