int test_func(void) {
    int v0 = 17;
    int v1 = 88;
    int v2 = 35;
    int v3 = 4;
    int v4 = 9;
    int v5 = 83;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    v2 = 76;
    v5 = v5 * 3;
    return v0;
}
int main(void) { return test_func(); }
