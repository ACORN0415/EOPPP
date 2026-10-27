int test_func(void) {
    int v0 = 90;
    int v1 = 38;
    int v2 = 40;
    int v3 = 58;
    int v4 = 55;
    int v5 = 63;
    int v6 = 10;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
