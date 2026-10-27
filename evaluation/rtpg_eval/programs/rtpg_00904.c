int test_func(void) {
    int v0 = 19;
    int v1 = 70;
    int v2 = 60;
    int v3 = 33;
    int v4 = 79;
    int v5 = 46;
    int v6 = 13;
    int i;
    v3 = v3 * 5;
    v0 = 22;
    if (v5 > v4) { v5 = v4; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
