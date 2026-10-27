int test_func(void) {
    int v0 = 59;
    int v1 = 39;
    int v2 = 64;
    int v3 = 29;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v0;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
