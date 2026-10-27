int test_func(void) {
    int v0 = 38;
    int v1 = 90;
    int v2 = 44;
    int v3 = 64;
    int v4 = 63;
    int v5 = 54;
    int v6 = 89;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v6;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
