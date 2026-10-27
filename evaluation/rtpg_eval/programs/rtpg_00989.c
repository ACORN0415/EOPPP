int test_func(void) {
    int v0 = 20;
    int v1 = 35;
    int v2 = 5;
    int v3 = 35;
    int v4 = 40;
    int v5 = 38;
    int v6 = 33;
    int i;
    v1 = v1 * 6;
    if (v6 > v2) { v6 = v2; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
