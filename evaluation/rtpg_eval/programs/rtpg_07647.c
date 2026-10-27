int test_func(void) {
    int v0 = 48;
    int v1 = 100;
    int v2 = 43;
    int v3 = 83;
    int v4 = 20;
    int i;
    v1 = v1 - v4;
    v0 = v0 * 4;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
