int test_func(void) {
    int v0 = 53;
    int v1 = 43;
    int v2 = 82;
    int v3 = 52;
    int i;
    v3 = 68;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 + v3;
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
