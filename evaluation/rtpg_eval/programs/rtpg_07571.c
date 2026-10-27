int test_func(void) {
    int v0 = 82;
    int v1 = 31;
    int v2 = 57;
    int v3 = 94;
    int v4 = 77;
    int v5 = 27;
    int i;
    v4 = 50;
    v0 = v0 * 3;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v5;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
