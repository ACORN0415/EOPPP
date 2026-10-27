int test_func(void) {
    int v0 = 48;
    int v1 = 50;
    int v2 = 92;
    int v3 = 52;
    int v4 = 28;
    int v5 = 35;
    int i;
    v3 = v3 * 7;
    v2 = v2 - v3;
    v5 = v5 + v4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
