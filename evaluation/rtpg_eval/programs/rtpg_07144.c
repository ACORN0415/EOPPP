int test_func(void) {
    int v0 = 84;
    int v1 = 99;
    int v2 = 0;
    int v3 = 76;
    int v4 = 26;
    int i;
    v0 = v0 + v3;
    if (v0 > v3) { v0 = v3; }
    v0 = v0 * 7;
    return v0;
}
int main(void) { return test_func(); }
