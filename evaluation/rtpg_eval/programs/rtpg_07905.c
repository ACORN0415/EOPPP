int test_func(void) {
    int v0 = 99;
    int v1 = 96;
    int v2 = 2;
    int v3 = 21;
    int v4 = 18;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
