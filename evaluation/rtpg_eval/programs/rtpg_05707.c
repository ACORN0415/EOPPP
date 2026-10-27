int test_func(void) {
    int v0 = 53;
    int v1 = 31;
    int v2 = 50;
    int v3 = 7;
    int v4 = 18;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
