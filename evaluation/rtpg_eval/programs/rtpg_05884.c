int test_func(void) {
    int v0 = 18;
    int v1 = 42;
    int v2 = 70;
    int v3 = 75;
    int i;
    v2 = v2 * 10;
    v1 = 65;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v3;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
