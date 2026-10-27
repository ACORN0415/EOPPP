int test_func(void) {
    int v0 = 49;
    int v1 = 0;
    int v2 = 50;
    int v3 = 55;
    int v4 = 68;
    int v5 = 47;
    int v6 = 68;
    int v7 = 23;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v5;
    }
    v2 = v2 * 7;
    return v0;
}
int main(void) { return test_func(); }
