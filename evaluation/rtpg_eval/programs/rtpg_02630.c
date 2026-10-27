int test_func(void) {
    int v0 = 15;
    int v1 = 89;
    int v2 = 60;
    int v3 = 40;
    int v4 = 32;
    int v5 = 64;
    int v6 = 97;
    int v7 = 7;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 6; i++) {
        v2 = v2 + v4;
    }
    v2 = v2 - v7;
    v7 = v7 * 7;
    return v0;
}
int main(void) { return test_func(); }
