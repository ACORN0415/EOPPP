int test_func(void) {
    int v0 = 23;
    int v1 = 12;
    int v2 = 76;
    int v3 = 49;
    int v4 = 75;
    int i;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v4;
    }
    v4 = v4 + v4;
    v3 = 24;
    return v0;
}
int main(void) { return test_func(); }
