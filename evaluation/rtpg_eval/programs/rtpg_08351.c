int test_func(void) {
    int v0 = 61;
    int v1 = 38;
    int v2 = 22;
    int v3 = 96;
    int v4 = 4;
    int v5 = 18;
    int i;
    v3 = v3 - v0;
    v5 = v5 + v3;
    if (v5 > v4) { v5 = v4; }
    return v0;
}
int main(void) { return test_func(); }
