int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 43;
    int v2 = 29;
    int v3 = 52;
    int v4 = 49;
    int v5 = 25;
    int v6 = 76;
    int v7 = 98;
    int i;
    v0 = v0 + v6;
    v2 = 46;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
