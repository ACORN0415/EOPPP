int test_func(void) {
    int v0 = 41;
    int v1 = 78;
    int v2 = 37;
    int v3 = 95;
    int v4 = 87;
    int v5 = 79;
    int i;
    if (v3 > v5) { v3 = v5; }
    v5 = v5 * 9;
    return v0;
}
int main(void) { return test_func(); }
