int test_func(void) {
    int v0 = 66;
    int v1 = 58;
    int v2 = 66;
    int v3 = 67;
    int v4 = 12;
    int v5 = 88;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v3;
    }
    v4 = v4 * 8;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
