int test_func(void) {
    int v0 = 92;
    int v1 = 59;
    int v2 = 12;
    int v3 = 21;
    int v4 = 48;
    int v5 = 46;
    int v6 = 100;
    int i;
    v5 = v5 + v6;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v6;
    }
    v5 = v5 * 10;
    return v0;
}
int main(void) { return test_func(); }
