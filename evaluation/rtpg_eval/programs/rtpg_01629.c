int __arr_1629[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 70;
    int v2 = 61;
    int v3 = 31;
    int v4 = 81;
    int v5 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_1629[i] = v0 + i; }
    for (i = 0; i < 17; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 * 2;
    return v0;
}
int main(void) { return test_func(); }
