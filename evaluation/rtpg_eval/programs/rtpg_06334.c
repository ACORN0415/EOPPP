int test_func(void) {
    int v0 = 100;
    int v1 = 23;
    int v2 = 7;
    int v3 = 15;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 * 6;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
