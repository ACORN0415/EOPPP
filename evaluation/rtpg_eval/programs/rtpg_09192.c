int test_func(void) {
    int v0 = 46;
    int v1 = 91;
    int v2 = 75;
    int v3 = 8;
    int v4 = 55;
    int i;
    v1 = v1 - v4;
    v4 = v4 * 4;
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
