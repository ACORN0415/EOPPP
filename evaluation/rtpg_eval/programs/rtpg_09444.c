int test_func(void) {
    int v0 = 8;
    int v1 = 29;
    int v2 = 5;
    int v3 = 81;
    int v4 = 6;
    int v5 = 26;
    int i;
    if (v4 > v3) { v4 = v3; }
    v4 = 76;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
