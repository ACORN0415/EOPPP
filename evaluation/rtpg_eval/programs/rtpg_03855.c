int test_func(void) {
    int v0 = 78;
    int v1 = 45;
    int v2 = 87;
    int v3 = 54;
    int v4 = 6;
    int v5 = 38;
    int v6 = 60;
    int v7 = 89;
    int i;
    if (v1 > v7) { v1 = v7; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
