int test_func(void) {
    int v0 = 26;
    int v1 = 29;
    int v2 = 56;
    int v3 = 62;
    int v4 = 63;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
