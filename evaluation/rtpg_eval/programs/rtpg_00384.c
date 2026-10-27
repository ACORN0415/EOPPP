int test_func(void) {
    int v0 = 63;
    int v1 = 35;
    int v2 = 66;
    int v3 = 35;
    int v4 = 17;
    int v5 = 44;
    int v6 = 79;
    int v7 = 19;
    int i;
    v2 = 6;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v7;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
