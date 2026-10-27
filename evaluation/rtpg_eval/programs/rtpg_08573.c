int test_func(void) {
    int v0 = 48;
    int v1 = 92;
    int v2 = 15;
    int v3 = 5;
    int v4 = 32;
    int v5 = 19;
    int v6 = 45;
    int i;
    v4 = 7;
    v0 = v0 + v0;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    v4 = v4 * 4;
    return v0;
}
int main(void) { return test_func(); }
