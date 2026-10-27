int test_func(void) {
    int v0 = 18;
    int v1 = 54;
    int v2 = 1;
    int i;
    v0 = v0 + v0;
    v0 = v0 * 4;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
