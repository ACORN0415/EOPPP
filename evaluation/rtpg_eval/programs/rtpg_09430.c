int test_func(void) {
    int v0 = 34;
    int v1 = 10;
    int v2 = 94;
    int v3 = 25;
    int v4 = 34;
    int v5 = 53;
    int v6 = 22;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v5;
    }
    v4 = 13;
    v5 = v5 + v1;
    v6 = v6 * 8;
    return v0;
}
int main(void) { return test_func(); }
