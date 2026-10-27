int test_func(void) {
    int v0 = 20;
    int v1 = 66;
    int v2 = 49;
    int v3 = 15;
    int v4 = 51;
    int v5 = 1;
    int v6 = 78;
    int i;
    v6 = 93;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
