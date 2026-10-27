int test_func(void) {
    int v0 = 57;
    int v1 = 12;
    int v2 = 88;
    int v3 = 29;
    int v4 = 85;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    v3 = 67;
    v3 = v3 % (v0 + 1);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
