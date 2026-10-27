int test_func(void) {
    int v0 = 92;
    int v1 = 26;
    int v2 = 68;
    int v3 = 14;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    v3 = v3 * 9;
    if (v0 > v0) { v0 = v0; }
    v3 = v3 - v2;
    return v0;
}
int main(void) { return test_func(); }
