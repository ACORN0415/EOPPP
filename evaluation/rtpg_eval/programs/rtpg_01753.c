int test_func(void) {
    int v0 = 82;
    int v1 = 26;
    int v2 = 32;
    int i;
    if (v1 > v0) { v1 = v0; }
    v2 = v2 - v0;
    v2 = v2 * 6;
    return v0;
}
int main(void) { return test_func(); }
