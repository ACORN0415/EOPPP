int test_func(void) {
    int v0 = 99;
    int v1 = 61;
    int v2 = 49;
    int v3 = 38;
    int i;
    v3 = v3 - v2;
    v1 = v1 & v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
