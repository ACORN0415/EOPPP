int test_func(void) {
    int v0 = 77;
    int v1 = 6;
    int v2 = 15;
    int v3 = 64;
    int v4 = 84;
    int v5 = 55;
    int v6 = 61;
    int v7 = 29;
    int i;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v2;
    }
    v3 = v3 - v1;
    v1 = v1 + v5;
    return v0;
}
int main(void) { return test_func(); }
