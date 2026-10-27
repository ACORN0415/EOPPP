int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 23;
    int v2 = 40;
    int v3 = 73;
    int v4 = 92;
    int v5 = 25;
    int v6 = 61;
    int v7 = 22;
    int i;
    v4 = v4 + v2;
    v2 = __helper(v2);
    v2 = v2 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
