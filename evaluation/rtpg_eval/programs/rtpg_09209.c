int test_func(void) {
    int v0 = 73;
    int v1 = 1;
    int v2 = 56;
    int v3 = 63;
    int v4 = 85;
    int v5 = 1;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v0;
    }
    if (v4 > v2) { v4 = v2; }
    return v0;
}
int main(void) { return test_func(); }
