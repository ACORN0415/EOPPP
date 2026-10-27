int test_func(void) {
    int v0 = 1;
    int v1 = 67;
    int v2 = 56;
    int v3 = 17;
    int v4 = 58;
    int v5 = 72;
    int v6 = 64;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v6;
    }
    v0 = v0 - v3;
    v0 = v0 * 4;
    if (v2 > v6) { v2 = v6; }
    return v0;
}
int main(void) { return test_func(); }
