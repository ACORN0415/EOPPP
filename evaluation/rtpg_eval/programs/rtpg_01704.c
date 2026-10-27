int test_func(void) {
    int v0 = 87;
    int v1 = 40;
    int v2 = 97;
    int v3 = 10;
    int v4 = 34;
    int i;
    v2 = v2 - v0;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
