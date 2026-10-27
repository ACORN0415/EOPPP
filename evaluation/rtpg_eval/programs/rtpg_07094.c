int test_func(void) {
    int v0 = 58;
    int v1 = 7;
    int v2 = 58;
    int v3 = 32;
    int v4 = 93;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v3;
    }
    v4 = v4 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
