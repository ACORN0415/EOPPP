int test_func(void) {
    int v0 = 9;
    int v1 = 95;
    int v2 = 8;
    int v3 = 72;
    int v4 = 0;
    int v5 = 76;
    int v6 = 55;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v0;
    }
    if (v4 > v6) { v4 = v6; }
    v1 = v1 + v6;
    return v0;
}
int main(void) { return test_func(); }
