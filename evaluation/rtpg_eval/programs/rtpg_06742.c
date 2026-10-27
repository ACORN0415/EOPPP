int test_func(void) {
    int v0 = 14;
    int v1 = 69;
    int v2 = 33;
    int v3 = 69;
    int v4 = 91;
    int v5 = 76;
    int v6 = 1;
    int v7 = 38;
    int i;
    v5 = 1;
    v7 = v7 - v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
