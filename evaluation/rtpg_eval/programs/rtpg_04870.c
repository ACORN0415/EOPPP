int test_func(void) {
    int v0 = 75;
    int v1 = 46;
    int v2 = 19;
    int v3 = 60;
    int v4 = 18;
    int v5 = 23;
    int v6 = 26;
    int i;
    v0 = 3;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 * 2;
    return v0;
}
int main(void) { return test_func(); }
