int __arr_7357[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 5;
    int v2 = 71;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7357[i] = v0 + i; }
    v0 = v0 * 5;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
