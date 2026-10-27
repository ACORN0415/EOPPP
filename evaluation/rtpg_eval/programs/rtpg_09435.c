int test_func(void) {
    int v0 = 11;
    int v1 = 92;
    int v2 = 83;
    int v3 = 9;
    int v4 = 78;
    int v5 = 71;
    int v6 = 21;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    v6 = v6 + v5;
    if (v4 > v1) { v4 = v1; }
    return v0;
}
int main(void) { return test_func(); }
