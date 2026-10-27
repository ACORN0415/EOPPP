int test_func(void) {
    int v0 = 48;
    int v1 = 64;
    int v2 = 45;
    int v3 = 35;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
