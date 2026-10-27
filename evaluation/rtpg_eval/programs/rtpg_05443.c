int test_func(void) {
    int v0 = 29;
    int v1 = 46;
    int v2 = 35;
    int v3 = 32;
    int v4 = 43;
    int v5 = 74;
    int v6 = 95;
    int v7 = 61;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
