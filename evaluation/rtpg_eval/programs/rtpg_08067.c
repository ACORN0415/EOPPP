int test_func(void) {
    int v0 = 71;
    int v1 = 61;
    int v2 = 2;
    int v3 = 12;
    int v4 = 97;
    int v5 = 66;
    int v6 = 69;
    int i;
    v0 = 91;
    v6 = v6 * 2;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v6;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
