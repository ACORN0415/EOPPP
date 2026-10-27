int test_func(void) {
    int v0 = 87;
    int v1 = 15;
    int v2 = 36;
    int i;
    v0 = 95;
    for (i = 0; i < 18; i++) {
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
