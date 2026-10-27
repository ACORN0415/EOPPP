int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 84;
    int v1 = 48;
    int v2 = 59;
    int v3 = 5;
    int v4 = 18;
    int i;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v4;
    }
    v0 = v0 + v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
