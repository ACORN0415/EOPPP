int test_func(void) {
    int v0 = 8;
    int v1 = 6;
    int v2 = 18;
    int v3 = 15;
    int v4 = 34;
    int v5 = 87;
    int v6 = 61;
    int v7 = 98;
    int i;
    if (v5 > v6) { v5 = v6; }
    v1 = v1 - v7;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
