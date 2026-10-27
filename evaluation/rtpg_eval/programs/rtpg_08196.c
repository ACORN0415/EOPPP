int test_func(void) {
    int v0 = 76;
    int v1 = 96;
    int v2 = 0;
    int v3 = 76;
    int i;
    v2 = v2 + v3;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 * 10;
    return v0;
}
int main(void) { return test_func(); }
