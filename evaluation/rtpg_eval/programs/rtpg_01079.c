int test_func(void) {
    int v0 = 98;
    int v1 = 3;
    int v2 = 51;
    int v3 = 78;
    int v4 = 63;
    int v5 = 39;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v3;
    }
    v5 = v5 * 10;
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
