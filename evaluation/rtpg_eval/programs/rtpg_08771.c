int test_func(void) {
    int v0 = 78;
    int v1 = 58;
    int v2 = 23;
    int v3 = 91;
    int v4 = 63;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v3;
    }
    v4 = v4 | v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
