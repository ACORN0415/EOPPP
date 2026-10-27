int test_func(void) {
    int v0 = 90;
    int v1 = 40;
    int v2 = 39;
    int v3 = 67;
    int v4 = 58;
    int v5 = 38;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
