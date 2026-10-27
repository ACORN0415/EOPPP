int test_func(void) {
    int v0 = 17;
    int v1 = 36;
    int v2 = 80;
    int v3 = 98;
    int v4 = 1;
    int v5 = 82;
    int v6 = 46;
    int i;
    v3 = v3 * 4;
    if (v6 > v4) { v6 = v4; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
