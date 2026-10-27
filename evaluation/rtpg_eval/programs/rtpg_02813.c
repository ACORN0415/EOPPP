int test_func(void) {
    int v0 = 56;
    int v1 = 43;
    int v2 = 61;
    int v3 = 62;
    int v4 = 74;
    int v5 = 77;
    int v6 = 29;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v5;
    }
    if (v4 > v6) { v4 = v6; }
    v6 = v6 * 9;
    return v0;
}
int main(void) { return test_func(); }
