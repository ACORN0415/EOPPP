int test_func(void) {
    int v0 = 60;
    int v1 = 97;
    int v2 = 29;
    int v3 = 4;
    int v4 = 86;
    int v5 = 16;
    int v6 = 72;
    int v7 = 93;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    if (v5 > v6) { v5 = v6; }
    v3 = 45;
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }
