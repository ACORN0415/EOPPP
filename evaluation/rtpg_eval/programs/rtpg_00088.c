int __arr_88[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 15;
    int v2 = 72;
    int v3 = 97;
    int v4 = 33;
    int v5 = 63;
    int v6 = 38;
    int v7 = 73;
    int i;
    for (i = 0; i < 10; i++) { __arr_88[i] = v4 + i; }
    v0 = v0 * 6;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
