int test_func(void) {
    int v0 = 89;
    int v1 = 87;
    int v2 = 87;
    int v3 = 89;
    int v4 = 76;
    int v5 = 26;
    int v6 = 28;
    int i;
    v6 = 16;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 6; i++) {
        v6 = v6 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
