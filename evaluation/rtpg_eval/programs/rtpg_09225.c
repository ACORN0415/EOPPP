int test_func(void) {
    int v0 = 42;
    int v1 = 96;
    int v2 = 60;
    int v3 = 38;
    int v4 = 87;
    int v5 = 80;
    int v6 = 82;
    int i;
    if (v0 > v6) { v0 = v6; }
    v3 = 6;
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
