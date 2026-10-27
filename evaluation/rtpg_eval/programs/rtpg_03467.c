int test_func(void) {
    int v0 = 65;
    int v1 = 71;
    int v2 = 92;
    int v3 = 15;
    int v4 = 13;
    int v5 = 57;
    int v6 = 96;
    int v7 = 56;
    int i;
    if (v7 > v5) { v7 = v5; }
    v2 = v2 - v0;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
