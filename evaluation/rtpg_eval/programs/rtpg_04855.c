int test_func(void) {
    int v0 = 48;
    int v1 = 92;
    int v2 = 91;
    int v3 = 43;
    int v4 = 28;
    int v5 = 94;
    int v6 = 71;
    int i;
    v0 = 95;
    v4 = v4 * 7;
    if (v4 > v0) { v4 = v0; }
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
