int test_func(void) {
    int v0 = 92;
    int v1 = 9;
    int v2 = 21;
    int v3 = 46;
    int v4 = 81;
    int v5 = 80;
    int v6 = 54;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v6;
    }
    v5 = 80;
    return v0;
}
int main(void) { return test_func(); }
