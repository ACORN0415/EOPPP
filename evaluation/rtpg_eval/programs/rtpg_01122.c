int test_func(void) {
    int v0 = 24;
    int v1 = 74;
    int v2 = 56;
    int v3 = 6;
    int i;
    v0 = v0 * 9;
    v3 = 67;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
