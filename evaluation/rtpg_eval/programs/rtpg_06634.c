int test_func(void) {
    int v0 = 39;
    int v1 = 47;
    int v2 = 7;
    int v3 = 39;
    int v4 = 24;
    int v5 = 60;
    int i;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v3;
    }
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }
