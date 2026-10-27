int test_func(void) {
    int v0 = 72;
    int v1 = 9;
    int v2 = 43;
    int v3 = 71;
    int v4 = 25;
    int v5 = 68;
    int v6 = 81;
    int i;
    v1 = v1 * 8;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v3;
    }
    if (v0 > v6) { v0 = v6; }
    return v0;
}
int main(void) { return test_func(); }
