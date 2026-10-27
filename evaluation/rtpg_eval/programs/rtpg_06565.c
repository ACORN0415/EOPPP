int test_func(void) {
    int v0 = 55;
    int v1 = 45;
    int v2 = 49;
    int v3 = 86;
    int v4 = 5;
    int v5 = 46;
    int v6 = 72;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v6;
    }
    if (v6 > v1) { v6 = v1; }
    v4 = v4 * 9;
    v1 = 36;
    return v0;
}
int main(void) { return test_func(); }
