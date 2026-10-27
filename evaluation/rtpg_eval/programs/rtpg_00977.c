int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 45;
    int v1 = 84;
    int v2 = 84;
    int v3 = 20;
    int v4 = 26;
    int v5 = 50;
    int v6 = 2;
    int v7 = 39;
    int i;
    v2 = 55;
    v2 = v2 - v5;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v7;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
