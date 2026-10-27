int test_func(void) {
    int v0 = 24;
    int v1 = 62;
    int v2 = 21;
    int v3 = 54;
    int v4 = 94;
    int v5 = 100;
    int v6 = 46;
    int i;
    v1 = 58;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v5;
    }
    v5 = v5 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
