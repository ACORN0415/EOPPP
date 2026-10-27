int test_func(void) {
    int v0 = 96;
    int v1 = 99;
    int v2 = 4;
    int v3 = 75;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 * 3;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
