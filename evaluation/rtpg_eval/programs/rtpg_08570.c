int test_func(void) {
    int v0 = 31;
    int v1 = 18;
    int v2 = 17;
    int v3 = 96;
    int v4 = 48;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
