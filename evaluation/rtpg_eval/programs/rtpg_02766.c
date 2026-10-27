int test_func(void) {
    int v0 = 86;
    int v1 = 62;
    int v2 = 97;
    int v3 = 49;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v3;
    }
    v3 = v3 * 4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
