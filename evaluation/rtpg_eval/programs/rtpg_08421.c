int test_func(void) {
    int v0 = 48;
    int v1 = 5;
    int v2 = 52;
    int v3 = 21;
    int v4 = 87;
    int i;
    v0 = v0 * 2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
