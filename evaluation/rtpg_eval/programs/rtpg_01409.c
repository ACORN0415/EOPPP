int __arr_1409[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 14;
    int v2 = 5;
    int v3 = 64;
    int v4 = 87;
    int v5 = 20;
    int v6 = 43;
    int v7 = 86;
    int i;
    if (v5 > v2) { v5 = v2; }
    for (i = 0; i < 10; i++) { __arr_1409[i] = v5 + i; }
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
