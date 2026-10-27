int test_func(void) {
    int v0 = 81;
    int v1 = 22;
    int v2 = 11;
    int v3 = 72;
    int v4 = 30;
    int v5 = 20;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v5;
    }
    v4 = v4 - v2;
    return v0;
}
int main(void) { return test_func(); }
