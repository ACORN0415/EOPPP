int test_func(void) {
    int v0 = 78;
    int v1 = 14;
    int v2 = 47;
    int v3 = 28;
    int v4 = 29;
    int v5 = 37;
    int v6 = 33;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v1;
    }
    v6 = v6 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
