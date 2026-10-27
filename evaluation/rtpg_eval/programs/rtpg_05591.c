int test_func(void) {
    int v0 = 76;
    int v1 = 23;
    int v2 = 82;
    int v3 = 34;
    int v4 = 70;
    int i;
    if (v2 > v0) { v2 = v0; }
    v0 = v0 * 4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
