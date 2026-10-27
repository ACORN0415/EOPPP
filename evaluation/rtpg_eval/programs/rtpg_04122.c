int test_func(void) {
    int v0 = 44;
    int v1 = 72;
    int v2 = 90;
    int v3 = 21;
    int v4 = 63;
    int v5 = 41;
    int v6 = 37;
    int i;
    v5 = v5 * 5;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    v3 = v3 + v1;
    return v0;
}
int main(void) { return test_func(); }
