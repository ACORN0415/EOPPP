int test_func(void) {
    int v0 = 26;
    int v1 = 67;
    int v2 = 34;
    int v3 = 1;
    int v4 = 55;
    int v5 = 97;
    int v6 = 66;
    int i;
    if (v3 > v6) { v3 = v6; }
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    v5 = v5 * 4;
    return v0;
}
int main(void) { return test_func(); }
