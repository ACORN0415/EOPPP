int test_func(void) {
    int v0 = 39;
    int v1 = 33;
    int v2 = 30;
    int v3 = 84;
    int v4 = 19;
    int v5 = 54;
    int v6 = 66;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }
