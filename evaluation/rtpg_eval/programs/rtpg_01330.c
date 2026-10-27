int test_func(void) {
    int v0 = 54;
    int v1 = 96;
    int v2 = 12;
    int v3 = 35;
    int v4 = 49;
    int i;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 8; i++) {
        v4 = v4 + v3;
    }
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }
