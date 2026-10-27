int test_func(void) {
    int v0 = 67;
    int v1 = 71;
    int v2 = 26;
    int v3 = 96;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
