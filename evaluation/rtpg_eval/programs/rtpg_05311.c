int test_func(void) {
    int v0 = 16;
    int v1 = 12;
    int v2 = 84;
    int v3 = 40;
    int v4 = 52;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 * 2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
