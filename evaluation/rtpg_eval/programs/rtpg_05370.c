int test_func(void) {
    int v0 = 50;
    int v1 = 80;
    int v2 = 87;
    int v3 = 37;
    int v4 = 21;
    int v5 = 37;
    int v6 = 91;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v5;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
