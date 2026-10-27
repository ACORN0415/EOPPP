int __arr_1408[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 76;
    int v2 = 58;
    int v3 = 42;
    int v4 = 20;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_1408[i] = v4 + i; }
    v4 = v4 * 6;
    return v0;
}
int main(void) { return test_func(); }
