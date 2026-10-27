int test_func(void) {
    int v0 = 9;
    int v1 = 85;
    int v2 = 43;
    int v3 = 64;
    int v4 = 67;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
