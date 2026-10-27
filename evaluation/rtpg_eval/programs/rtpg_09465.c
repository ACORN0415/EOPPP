int test_func(void) {
    int v0 = 92;
    int v1 = 79;
    int v2 = 3;
    int v3 = 43;
    int v4 = 73;
    int v5 = 3;
    int i;
    if (v2 > v4) { v2 = v4; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
