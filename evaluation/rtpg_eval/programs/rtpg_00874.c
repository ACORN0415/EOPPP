int test_func(void) {
    int v0 = 35;
    int v1 = 48;
    int v2 = 68;
    int v3 = 9;
    int v4 = 64;
    int v5 = 6;
    int v6 = 69;
    int v7 = 32;
    int i;
    for (i = 0; i < 18; i++) {
        v7 = v7 + v7;
    }
    v0 = v0 + v4;
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
