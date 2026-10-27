int test_func(void) {
    int v0 = 6;
    int v1 = 88;
    int v2 = 77;
    int v3 = 60;
    int i;
    if (v3 > v1) { v3 = v1; }
    v3 = v3 * 7;
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
