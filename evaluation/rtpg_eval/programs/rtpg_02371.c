int test_func(void) {
    int v0 = 24;
    int v1 = 83;
    int v2 = 37;
    int v3 = 4;
    int v4 = 66;
    int v5 = 33;
    int v6 = 78;
    int v7 = 98;
    int i;
    v7 = v7 + v7;
    v0 = 60;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v7;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
