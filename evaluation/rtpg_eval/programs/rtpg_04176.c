int test_func(void) {
    int v0 = 46;
    int v1 = 19;
    int v2 = 59;
    int v3 = 38;
    int v4 = 45;
    int i;
    v3 = v3 * 4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
