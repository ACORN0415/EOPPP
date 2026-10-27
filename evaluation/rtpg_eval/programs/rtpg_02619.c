int test_func(void) {
    int v0 = 47;
    int v1 = 5;
    int v2 = 12;
    int v3 = 9;
    int v4 = 33;
    int v5 = 96;
    int v6 = 64;
    int v7 = 28;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v4;
    }
    v0 = 96;
    if (v2 > v5) { v2 = v5; }
    return v0;
}
int main(void) { return test_func(); }
