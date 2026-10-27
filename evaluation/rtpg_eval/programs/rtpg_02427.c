int test_func(void) {
    int v0 = 68;
    int v1 = 57;
    int v2 = 87;
    int v3 = 73;
    int v4 = 15;
    int v5 = 89;
    int i;
    v3 = 43;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    v2 = v2 * 7;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
