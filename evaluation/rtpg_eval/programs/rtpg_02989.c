int test_func(void) {
    int v0 = 38;
    int v1 = 37;
    int v2 = 45;
    int v3 = 88;
    int v4 = 73;
    int v5 = 75;
    int v6 = 7;
    int i;
    v0 = v0 + v0;
    if (v0 > v4) { v0 = v4; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v5;
    }
    v3 = 82;
    return v0;
}
int main(void) { return test_func(); }
