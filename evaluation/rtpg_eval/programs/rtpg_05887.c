int __arr_5887[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 17;
    int v2 = 82;
    int v3 = 62;
    int v4 = 92;
    int v5 = 8;
    int v6 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_5887[i] = v6 + i; }
    v6 = v6 * 8;
    for (i = 0; i < 8; i++) {
        v6 = v6 + v6;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
