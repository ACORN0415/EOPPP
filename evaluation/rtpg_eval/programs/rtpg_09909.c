int test_func(void) {
    int v0 = 61;
    int v1 = 92;
    int v2 = 33;
    int v3 = 62;
    int v4 = 66;
    int v5 = 24;
    int i;
    v5 = 56;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v1;
    }
    v2 = v2 + v1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
