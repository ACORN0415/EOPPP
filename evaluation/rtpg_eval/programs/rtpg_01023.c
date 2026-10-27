int test_func(void) {
    int v0 = 51;
    int v1 = 89;
    int v2 = 99;
    int v3 = 68;
    int v4 = 94;
    int v5 = 52;
    int v6 = 2;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    v1 = v1 * 9;
    return v0;
}
int main(void) { return test_func(); }
