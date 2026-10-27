int test_func(void) {
    int v0 = 4;
    int v1 = 22;
    int v2 = 78;
    int v3 = 11;
    int v4 = 12;
    int v5 = 56;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v5;
    }
    v5 = 82;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
