int __arr_5392[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 88;
    int v2 = 9;
    int v3 = 67;
    int v4 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5392[i] = v0 + i; }
    v2 = v2 * 9;
    return v0;
}
int main(void) { return test_func(); }
