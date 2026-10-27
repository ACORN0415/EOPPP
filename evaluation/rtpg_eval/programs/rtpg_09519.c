int test_func(void) {
    int v0 = 12;
    int v1 = 76;
    int v2 = 7;
    int v3 = 81;
    int i;
    v0 = v0 * 10;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
