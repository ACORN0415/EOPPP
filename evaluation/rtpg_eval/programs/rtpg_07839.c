int test_func(void) {
    int v0 = 66;
    int v1 = 31;
    int v2 = 33;
    int v3 = 20;
    int v4 = 52;
    int v5 = 62;
    int v6 = 30;
    int i;
    v5 = v5 * 10;
    v5 = v5 - v6;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
