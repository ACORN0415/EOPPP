int test_func(void) {
    int v0 = 93;
    int v1 = 39;
    int v2 = 64;
    int v3 = 72;
    int v4 = 99;
    int i;
    v0 = 21;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
