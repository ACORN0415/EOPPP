int test_func(void) {
    int v0 = 4;
    int v1 = 62;
    int v2 = 7;
    int v3 = 48;
    int v4 = 61;
    int v5 = 64;
    int v6 = 6;
    int v7 = 84;
    int i;
    v0 = v0 * 8;
    v7 = v7 - v5;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
