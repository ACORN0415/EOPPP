int __arr_1474[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 10;
    int v2 = 97;
    int v3 = 91;
    int v4 = 17;
    int v5 = 84;
    int v6 = 54;
    int i;
    for (i = 0; i < 10; i++) {
        v5 = v5 + v4;
    }
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 10; i++) { __arr_1474[i] = v5 + i; }
    v0 = v0 * 2;
    return v0;
}
int main(void) { return test_func(); }
