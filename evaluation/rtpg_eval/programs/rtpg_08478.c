int test_func(void) {
    int v0 = 28;
    int v1 = 62;
    int v2 = 66;
    int v3 = 39;
    int v4 = 74;
    int v5 = 3;
    int v6 = 1;
    int v7 = 53;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v2;
    }
    v5 = v5 - v0;
    return v0;
}
int main(void) { return test_func(); }
