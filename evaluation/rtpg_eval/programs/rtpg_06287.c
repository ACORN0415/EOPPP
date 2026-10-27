int test_func(void) {
    int v0 = 80;
    int v1 = 72;
    int v2 = 17;
    int v3 = 49;
    int v4 = 11;
    int v5 = 47;
    int i;
    v0 = 64;
    if (v5 > v4) { v5 = v4; }
    v4 = v4 - v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
