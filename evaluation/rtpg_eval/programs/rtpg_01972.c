int test_func(void) {
    int v0 = 63;
    int v1 = 97;
    int v2 = 66;
    int v3 = 96;
    int v4 = 60;
    int v5 = 75;
    int v6 = 2;
    int v7 = 89;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v7;
    }
    v5 = v5 * 2;
    return v0;
}
int main(void) { return test_func(); }
