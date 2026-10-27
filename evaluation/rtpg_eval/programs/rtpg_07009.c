int test_func(void) {
    int v0 = 37;
    int v1 = 68;
    int v2 = 53;
    int v3 = 56;
    int v4 = 6;
    int i;
    v4 = 39;
    v3 = v3 + v0;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
