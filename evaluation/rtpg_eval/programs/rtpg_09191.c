int test_func(void) {
    int v0 = 86;
    int v1 = 67;
    int v2 = 67;
    int v3 = 10;
    int v4 = 66;
    int v5 = 92;
    int i;
    if (v0 > v2) { v0 = v2; }
    v0 = v0 - v5;
    v2 = 91;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
