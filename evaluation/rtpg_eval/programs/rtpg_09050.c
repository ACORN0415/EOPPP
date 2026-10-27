int test_func(void) {
    int v0 = 48;
    int v1 = 14;
    int v2 = 9;
    int v3 = 93;
    int i;
    v3 = v3 + v0;
    if (v3 > v3) { v3 = v3; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
