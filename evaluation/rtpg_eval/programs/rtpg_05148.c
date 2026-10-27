int test_func(void) {
    int v0 = 77;
    int v1 = 31;
    int v2 = 64;
    int v3 = 63;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v0;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
