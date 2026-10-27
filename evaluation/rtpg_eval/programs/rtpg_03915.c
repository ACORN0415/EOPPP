int test_func(void) {
    int v0 = 9;
    int v1 = 14;
    int v2 = 13;
    int v3 = 23;
    int v4 = 59;
    int v5 = 48;
    int v6 = 13;
    int i;
    v6 = v6 - v5;
    v6 = v6 * 5;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    v0 = 68;
    return v0;
}
int main(void) { return test_func(); }
