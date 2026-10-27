int __arr_7816[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 0;
    int v2 = 53;
    int v3 = 38;
    int v4 = 72;
    int v5 = 52;
    int v6 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_7816[i] = v1 + i; }
    v1 = v1 * 5;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
