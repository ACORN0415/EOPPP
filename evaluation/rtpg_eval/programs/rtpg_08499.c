int test_func(void) {
    int v0 = 20;
    int v1 = 42;
    int v2 = 20;
    int v3 = 56;
    int v4 = 57;
    int i;
    v4 = v4 * 6;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v4;
    }
    v1 = v1 % (v2 + 1);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
