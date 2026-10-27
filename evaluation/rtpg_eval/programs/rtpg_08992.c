int test_func(void) {
    int v0 = 55;
    int v1 = 91;
    int v2 = 8;
    int v3 = 95;
    int v4 = 10;
    int v5 = 42;
    int v6 = 99;
    int v7 = 64;
    int i;
    v5 = v5 * 6;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v7;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
