int test_func(void) {
    int v0 = 30;
    int v1 = 3;
    int v2 = 93;
    int v3 = 49;
    int v4 = 86;
    int v5 = 41;
    int i;
    if (v3 > v4) { v3 = v4; }
    v0 = v0 + v3;
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }
