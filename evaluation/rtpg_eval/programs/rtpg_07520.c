int __arr_7520[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 82;
    int v2 = 99;
    int v3 = 16;
    int v4 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_7520[i] = v1 + i; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    v0 = v0 * 9;
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
