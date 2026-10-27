int test_func(void) {
    int v0 = 51;
    int v1 = 74;
    int v2 = 49;
    int v3 = 31;
    int v4 = 96;
    int v5 = 32;
    int v6 = 9;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v6;
    }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
