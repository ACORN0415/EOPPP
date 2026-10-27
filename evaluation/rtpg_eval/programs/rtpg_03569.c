int test_func(void) {
    int v0 = 2;
    int v1 = 60;
    int v2 = 55;
    int v3 = 24;
    int v4 = 11;
    int v5 = 52;
    int v6 = 81;
    int i;
    for (i = 0; i < 13; i++) {
        v6 = v6 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
