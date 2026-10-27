int test_func(void) {
    int v0 = 6;
    int v1 = 55;
    int v2 = 96;
    int v3 = 66;
    int v4 = 92;
    int v5 = 99;
    int v6 = 85;
    int i;
    v0 = v0 - v4;
    if (v2 > v6) { v2 = v6; }
    v6 = v6 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
