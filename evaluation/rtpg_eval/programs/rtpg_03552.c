int __arr_3552[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 23;
    int v2 = 17;
    int v3 = 61;
    int v4 = 82;
    int v5 = 61;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_3552[i] = v1 + i; }
    v3 = v3 * 3;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
