int __arr_660[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 65;
    int v2 = 6;
    int v3 = 56;
    int i;
    v0 = v0 - v1;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_660[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
