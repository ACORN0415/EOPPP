int test_func(void) {
    int v0 = 80;
    int v1 = 66;
    int v2 = 98;
    int v3 = 82;
    int v4 = 65;
    int v5 = 28;
    int v6 = 96;
    int v7 = 87;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v5;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
