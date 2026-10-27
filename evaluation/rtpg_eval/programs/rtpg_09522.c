int test_func(void) {
    int v0 = 67;
    int v1 = 31;
    int v2 = 3;
    int v3 = 55;
    int v4 = 70;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
