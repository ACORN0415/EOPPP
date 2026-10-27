int test_func(void) {
    int v0 = 54;
    int v1 = 26;
    int v2 = 53;
    int v3 = 21;
    int v4 = 41;
    int i;
    if (v3 > v1) { v3 = v1; }
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
