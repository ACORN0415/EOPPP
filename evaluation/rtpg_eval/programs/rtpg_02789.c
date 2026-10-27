int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 7;
    int v2 = 65;
    int i;
    v1 = v1 + v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
