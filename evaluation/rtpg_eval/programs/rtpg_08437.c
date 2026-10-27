int test_func(void) {
    int v0 = 16;
    int v1 = 80;
    int v2 = 62;
    int v3 = 55;
    int v4 = 50;
    int v5 = 98;
    int v6 = 2;
    int v7 = 61;
    int i;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v7;
    }
    return v0;
}
int main(void) { return test_func(); }
