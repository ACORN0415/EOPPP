int test_func(void) {
    int v0 = 43;
    int v1 = 62;
    int v2 = 96;
    int v3 = 49;
    int v4 = 16;
    int v5 = 91;
    int v6 = 74;
    int v7 = 30;
    int i;
    for (i = 0; i < 11; i++) {
        v6 = v6 + v3;
    }
    if (v3 > v6) { v3 = v6; }
    v2 = v2 - v7;
    return v0;
}
int main(void) { return test_func(); }
