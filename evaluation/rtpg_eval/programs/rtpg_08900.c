int test_func(void) {
    int v0 = 2;
    int v1 = 28;
    int v2 = 62;
    int v3 = 71;
    int v4 = 51;
    int i;
    v1 = v1 + v3;
    if (v3 > v4) { v3 = v4; }
    v0 = v0 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
