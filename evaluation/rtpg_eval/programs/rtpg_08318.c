int test_func(void) {
    int v0 = 38;
    int v1 = 78;
    int v2 = 26;
    int v3 = 44;
    int v4 = 55;
    int v5 = 83;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
