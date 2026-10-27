int test_func(void) {
    int v0 = 53;
    int v1 = 11;
    int v2 = 75;
    int v3 = 100;
    int v4 = 78;
    int v5 = 96;
    int v6 = 77;
    int i;
    v3 = v3 * 3;
    v4 = v4 + v5;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
