int test_func(void) {
    int v0 = 64;
    int v1 = 55;
    int v2 = 58;
    int v3 = 95;
    int v4 = 99;
    int i;
    v3 = v3 * 10;
    if (v1 > v2) { v1 = v2; }
    v4 = v4 + v3;
    return v0;
}
int main(void) { return test_func(); }
