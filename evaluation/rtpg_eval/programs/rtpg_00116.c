int test_func(void) {
    int v0 = 42;
    int v1 = 52;
    int v2 = 88;
    int v3 = 45;
    int v4 = 30;
    int i;
    v1 = v1 + v4;
    v0 = v0 * 8;
    if (v3 > v0) { v3 = v0; }
    return v0;
}
int main(void) { return test_func(); }
