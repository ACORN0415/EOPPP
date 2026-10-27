int test_func(void) {
    int v0 = 35;
    int v1 = 83;
    int v2 = 43;
    int v3 = 7;
    int v4 = 28;
    int v5 = 100;
    int v6 = 90;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v4;
    }
    v1 = 18;
    if (v2 > v4) { v2 = v4; }
    v2 = v2 * 10;
    return v0;
}
int main(void) { return test_func(); }
