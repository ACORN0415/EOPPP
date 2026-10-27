int test_func(void) {
    int v0 = 73;
    int v1 = 60;
    int v2 = 86;
    int v3 = 20;
    int v4 = 92;
    int v5 = 91;
    int v6 = 61;
    int i;
    if (v6 > v5) { v6 = v5; }
    v6 = v6 + v6;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
