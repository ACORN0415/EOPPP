int test_func(void) {
    int v0 = 6;
    int v1 = 27;
    int v2 = 84;
    int v3 = 52;
    int v4 = 91;
    int v5 = 35;
    int v6 = 95;
    int i;
    if (v5 > v4) { v5 = v4; }
    v1 = 61;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
