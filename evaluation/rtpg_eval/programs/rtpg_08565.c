int test_func(void) {
    int v0 = 15;
    int v1 = 61;
    int v2 = 81;
    int v3 = 58;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
