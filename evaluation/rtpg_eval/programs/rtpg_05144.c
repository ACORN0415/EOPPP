int test_func(void) {
    int v0 = 1;
    int v1 = 78;
    int v2 = 79;
    int v3 = 50;
    int v4 = 80;
    int v5 = 19;
    int v6 = 75;
    int i;
    v5 = v5 + v0;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
