int test_func(void) {
    int v0 = 26;
    int v1 = 87;
    int v2 = 1;
    int v3 = 30;
    int v4 = 0;
    int v5 = 72;
    int i;
    if (v4 > v5) { v4 = v5; }
    v2 = v2 - v0;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
