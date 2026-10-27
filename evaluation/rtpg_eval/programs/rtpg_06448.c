int test_func(void) {
    int v0 = 7;
    int v1 = 60;
    int v2 = 6;
    int v3 = 54;
    int v4 = 82;
    int v5 = 82;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v4;
    }
    v4 = v4 * 6;
    return v0;
}
int main(void) { return test_func(); }
