int test_func(void) {
    int v0 = 83;
    int v1 = 88;
    int v2 = 70;
    int i;
    if (v2 > v0) { v2 = v0; }
    v2 = v2 * 2;
    v2 = v2 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
