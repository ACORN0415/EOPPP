int test_func(void) {
    int v0 = 55;
    int v1 = 20;
    int v2 = 72;
    int v3 = 71;
    int v4 = 77;
    int v5 = 3;
    int v6 = 37;
    int v7 = 41;
    int i;
    v2 = v2 * 3;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
