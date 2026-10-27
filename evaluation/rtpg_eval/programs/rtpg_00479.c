int test_func(void) {
    int v0 = 85;
    int v1 = 29;
    int v2 = 68;
    int v3 = 87;
    int v4 = 69;
    int v5 = 62;
    int v6 = 68;
    int v7 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v6;
    }
    if (v3 > v6) { v3 = v6; }
    v0 = v0 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }
