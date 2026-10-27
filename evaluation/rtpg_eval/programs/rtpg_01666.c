int test_func(void) {
    int v0 = 27;
    int v1 = 49;
    int v2 = 14;
    int v3 = 65;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    v3 = v3 + v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = v3 & v1;
    return v0;
}
int main(void) { return test_func(); }
