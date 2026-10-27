int test_func(void) {
    int v0 = 86;
    int v1 = 27;
    int v2 = 29;
    int v3 = 75;
    int v4 = 14;
    int v5 = 5;
    int i;
    v0 = v0 + v5;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
