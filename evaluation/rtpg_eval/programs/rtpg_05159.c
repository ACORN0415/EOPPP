int test_func(void) {
    int v0 = 54;
    int v1 = 66;
    int v2 = 76;
    int v3 = 56;
    int v4 = 22;
    int v5 = 78;
    int v6 = 82;
    int v7 = 93;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v4;
    }
    v1 = v1 + v2;
    if (v3 > v0) { v3 = v0; }
    v5 = v5 * 3;
    return v0;
}
int main(void) { return test_func(); }
