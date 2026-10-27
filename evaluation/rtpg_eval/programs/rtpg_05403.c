int test_func(void) {
    int v0 = 26;
    int v1 = 14;
    int v2 = 65;
    int v3 = 44;
    int v4 = 26;
    int v5 = 24;
    int i;
    v3 = v3 + v1;
    if (v3 > v1) { v3 = v1; }
    v3 = v3 * 3;
    return v0;
}
int main(void) { return test_func(); }
