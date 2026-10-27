int test_func(void) {
    int v0 = 91;
    int v1 = 87;
    int v2 = 90;
    int v3 = 20;
    int v4 = 16;
    int v5 = 93;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
