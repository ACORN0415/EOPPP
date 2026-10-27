int test_func(void) {
    int v0 = 43;
    int v1 = 22;
    int v2 = 17;
    int v3 = 99;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    v2 = 8;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
