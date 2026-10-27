int test_func(void) {
    int v0 = 63;
    int v1 = 64;
    int v2 = 42;
    int v3 = 46;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = v0 - v3;
    v3 = v3 + v3;
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
