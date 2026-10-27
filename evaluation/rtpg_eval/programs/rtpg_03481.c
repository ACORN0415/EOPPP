int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 12;
    int v2 = 13;
    int v3 = 2;
    int i;
    v2 = 59;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
