int test_func(void) {
    int v0 = 97;
    int v1 = 38;
    int v2 = 39;
    int v3 = 71;
    int v4 = 76;
    int i;
    v2 = v2 + v0;
    v0 = v0 - v1;
    v2 = v2 * 8;
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
