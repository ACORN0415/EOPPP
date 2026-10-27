int test_func(void) {
    int v0 = 80;
    int v1 = 52;
    int v2 = 1;
    int v3 = 73;
    int v4 = 46;
    int v5 = 47;
    int v6 = 28;
    int i;
    v6 = v6 - v2;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
