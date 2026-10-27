int test_func(void) {
    int v0 = 72;
    int v1 = 3;
    int v2 = 92;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 - v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
