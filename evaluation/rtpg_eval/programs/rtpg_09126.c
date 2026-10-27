int test_func(void) {
    int v0 = 23;
    int v1 = 92;
    int v2 = 81;
    int v3 = 86;
    int i;
    v1 = 36;
    v2 = v2 - v3;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
