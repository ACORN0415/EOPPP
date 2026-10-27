int test_func(void) {
    int v0 = 35;
    int v1 = 14;
    int v2 = 31;
    int v3 = 39;
    int v4 = 55;
    int v5 = 66;
    int v6 = 87;
    int v7 = 95;
    int i;
    v7 = v7 * 6;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
