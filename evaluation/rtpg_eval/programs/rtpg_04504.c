int test_func(void) {
    int v0 = 24;
    int v1 = 12;
    int v2 = 75;
    int v3 = 53;
    int v4 = 75;
    int v5 = 69;
    int v6 = 73;
    int v7 = 78;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    v0 = v0 * 10;
    if (v5 > v3) { v5 = v3; }
    v7 = 31;
    return v0;
}
int main(void) { return test_func(); }
