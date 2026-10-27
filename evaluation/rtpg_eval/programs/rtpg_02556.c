int test_func(void) {
    int v0 = 48;
    int v1 = 33;
    int v2 = 32;
    int v3 = 8;
    int v4 = 61;
    int v5 = 59;
    int i;
    v0 = v0 * 3;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
