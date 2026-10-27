int test_func(void) {
    int v0 = 40;
    int v1 = 1;
    int v2 = 97;
    int v3 = 11;
    int v4 = 45;
    int v5 = 16;
    int v6 = 32;
    int i;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
