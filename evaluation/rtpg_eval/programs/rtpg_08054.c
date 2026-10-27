int test_func(void) {
    int v0 = 28;
    int v1 = 9;
    int v2 = 15;
    int v3 = 66;
    int v4 = 40;
    int v5 = 77;
    int v6 = 29;
    int v7 = 15;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
