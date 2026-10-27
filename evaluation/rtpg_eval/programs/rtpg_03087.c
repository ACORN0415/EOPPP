int test_func(void) {
    int v0 = 82;
    int v1 = 58;
    int v2 = 62;
    int v3 = 94;
    int v4 = 83;
    int v5 = 97;
    int v6 = 75;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v6;
    }
    if (v1 > v5) { v1 = v5; }
    v2 = v2 * 2;
    v0 = 96;
    return v0;
}
int main(void) { return test_func(); }
