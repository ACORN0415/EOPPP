int test_func(void) {
    int v0 = 57;
    int v1 = 82;
    int v2 = 83;
    int v3 = 54;
    int v4 = 75;
    int i;
    if (v1 > v0) { v1 = v0; }
    v4 = v4 - v1;
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
