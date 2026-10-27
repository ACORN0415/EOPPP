int test_func(void) {
    int v0 = 48;
    int v1 = 8;
    int v2 = 33;
    int v3 = 7;
    int v4 = 86;
    int i;
    if (v0 > v2) { v0 = v2; }
    v4 = v4 * 3;
    v1 = v1 + v3;
    v0 = 6;
    return v0;
}
int main(void) { return test_func(); }
