int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 0;
    int v2 = 64;
    int v3 = 97;
    int i;
    v2 = v2 - v3;
    v3 = 70;
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = v2 ^ v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
