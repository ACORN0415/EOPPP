int test_func(void) {
    int v0 = 5;
    int v1 = 32;
    int v2 = 6;
    int v3 = 93;
    int v4 = 26;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
