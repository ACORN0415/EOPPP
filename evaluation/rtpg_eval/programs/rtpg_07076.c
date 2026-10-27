int test_func(void) {
    int v0 = 55;
    int v1 = 6;
    int v2 = 100;
    int v3 = 45;
    int v4 = 2;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
