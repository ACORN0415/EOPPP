int test_func(void) {
    int v0 = 12;
    int v1 = 93;
    int v2 = 22;
    int v3 = 8;
    int v4 = 24;
    int v5 = 31;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v1;
    }
    if (v1 > v1) { v1 = v1; }
    v5 = v5 * 6;
    return v0;
}
int main(void) { return test_func(); }
