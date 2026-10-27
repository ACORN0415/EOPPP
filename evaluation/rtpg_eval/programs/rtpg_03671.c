int test_func(void) {
    int v0 = 51;
    int v1 = 19;
    int v2 = 31;
    int v3 = 13;
    int v4 = 17;
    int v5 = 8;
    int v6 = 5;
    int i;
    v2 = v2 * 6;
    v3 = v3 - v2;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v5;
    }
    v0 = 50;
    return v0;
}
int main(void) { return test_func(); }
