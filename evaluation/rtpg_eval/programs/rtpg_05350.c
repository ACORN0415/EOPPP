int test_func(void) {
    int v0 = 24;
    int v1 = 27;
    int v2 = 75;
    int v3 = 22;
    int v4 = 78;
    int v5 = 50;
    int v6 = 36;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v0;
    }
    v6 = v6 - v1;
    return v0;
}
int main(void) { return test_func(); }
