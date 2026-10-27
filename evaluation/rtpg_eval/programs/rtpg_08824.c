int test_func(void) {
    int v0 = 86;
    int v1 = 96;
    int v2 = 8;
    int v3 = 87;
    int i;
    v3 = v3 + v2;
    v0 = v0 * 6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
