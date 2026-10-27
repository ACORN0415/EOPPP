int test_func(void) {
    int v0 = 58;
    int v1 = 30;
    int v2 = 79;
    int i;
    v2 = v2 - v1;
    v0 = v0 + v2;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 & v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
