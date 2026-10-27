int test_func(void) {
    int v0 = 30;
    int v1 = 44;
    int v2 = 100;
    int v3 = 84;
    int v4 = 38;
    int v5 = 10;
    int v6 = 15;
    int i;
    v2 = 83;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
