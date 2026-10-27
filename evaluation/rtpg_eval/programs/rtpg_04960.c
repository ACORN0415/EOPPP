int test_func(void) {
    int v0 = 99;
    int v1 = 90;
    int v2 = 0;
    int v3 = 37;
    int v4 = 32;
    int v5 = 28;
    int v6 = 39;
    int v7 = 80;
    int i;
    if (v3 > v7) { v3 = v7; }
    v0 = 35;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
