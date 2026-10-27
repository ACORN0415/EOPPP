int test_func(void) {
    int v0 = 50;
    int v1 = 28;
    int v2 = 88;
    int v3 = 89;
    int v4 = 34;
    int v5 = 5;
    int v6 = 36;
    int v7 = 27;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    v7 = v7 * 3;
    return v0;
}
int main(void) { return test_func(); }
