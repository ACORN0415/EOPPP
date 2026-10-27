int test_func(void) {
    int v0 = 60;
    int v1 = 19;
    int v2 = 16;
    int i;
    v0 = v0 * 7;
    v1 = 93;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = v1 | v2;
    return v0;
}
int main(void) { return test_func(); }
