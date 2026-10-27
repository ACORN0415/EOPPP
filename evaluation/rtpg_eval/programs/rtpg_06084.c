int test_func(void) {
    int v0 = 78;
    int v1 = 68;
    int v2 = 53;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
