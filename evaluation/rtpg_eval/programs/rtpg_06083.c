int test_func(void) {
    int v0 = 82;
    int v1 = 83;
    int v2 = 1;
    int v3 = 83;
    int v4 = 55;
    int v5 = 1;
    int v6 = 11;
    int i;
    v6 = 12;
    v3 = v3 * 5;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
