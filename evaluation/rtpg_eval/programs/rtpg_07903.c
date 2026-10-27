int test_func(void) {
    int v0 = 1;
    int v1 = 83;
    int v2 = 2;
    int v3 = 0;
    int v4 = 38;
    int v5 = 71;
    int v6 = 38;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 ^ v5;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
