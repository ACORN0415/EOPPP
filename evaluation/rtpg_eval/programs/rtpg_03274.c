int test_func(void) {
    int v0 = 1;
    int v1 = 64;
    int v2 = 87;
    int v3 = 71;
    int v4 = 30;
    int i;
    v0 = v0 * 9;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
