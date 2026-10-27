int test_func(void) {
    int v0 = 77;
    int v1 = 72;
    int v2 = 28;
    int v3 = 25;
    int v4 = 3;
    int v5 = 44;
    int v6 = 21;
    int i;
    if (v1 > v5) { v1 = v5; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v3;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
