int test_func(void) {
    int v0 = 88;
    int v1 = 63;
    int v2 = 85;
    int v3 = 92;
    int v4 = 85;
    int v5 = 94;
    int i;
    v4 = v4 - v5;
    v3 = v3 * 2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
