int test_func(void) {
    int v0 = 7;
    int v1 = 10;
    int v2 = 20;
    int v3 = 27;
    int v4 = 34;
    int v5 = 93;
    int v6 = 57;
    int v7 = 78;
    int i;
    v5 = v5 * 4;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
