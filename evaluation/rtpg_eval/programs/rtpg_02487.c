int test_func(void) {
    int v0 = 6;
    int v1 = 39;
    int v2 = 39;
    int v3 = 53;
    int i;
    if (v0 > v3) { v0 = v3; }
    v3 = 54;
    v0 = v0 * 3;
    return v0;
}
int main(void) { return test_func(); }
