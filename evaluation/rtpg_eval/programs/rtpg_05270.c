int test_func(void) {
    int v0 = 13;
    int v1 = 63;
    int v2 = 49;
    int v3 = 8;
    int v4 = 33;
    int v5 = 69;
    int v6 = 94;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
