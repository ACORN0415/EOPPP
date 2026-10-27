int __arr_6396[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 79;
    int v2 = 38;
    int v3 = 18;
    int v4 = 57;
    int v5 = 42;
    int v6 = 56;
    int i;
    v0 = 93;
    for (i = 0; i < 10; i++) { __arr_6396[i] = v1 + i; }
    for (i = 0; i < 5; i++) {
        v6 = v6 + v1;
    }
    v6 = v6 * 10;
    return v0;
}
int main(void) { return test_func(); }
