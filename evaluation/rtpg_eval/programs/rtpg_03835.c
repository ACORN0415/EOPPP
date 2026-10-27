int test_func(void) {
    int v0 = 80;
    int v1 = 45;
    int v2 = 30;
    int v3 = 38;
    int v4 = 6;
    int v5 = 45;
    int v6 = 65;
    int i;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
