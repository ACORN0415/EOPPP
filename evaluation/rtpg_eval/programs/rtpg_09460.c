int test_func(void) {
    int v0 = 60;
    int v1 = 8;
    int v2 = 2;
    int v3 = 2;
    int i;
    v2 = v2 + v3;
    v0 = v0 * 7;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = v1 & v2;
    return v0;
}
int main(void) { return test_func(); }
