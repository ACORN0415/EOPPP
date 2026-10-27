int test_func(void) {
    int v0 = 47;
    int v1 = 40;
    int v2 = 62;
    int v3 = 23;
    int v4 = 33;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = v4 - v0;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
