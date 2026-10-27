int test_func(void) {
    int v0 = 30;
    int v1 = 91;
    int v2 = 66;
    int v3 = 35;
    int v4 = 82;
    int v5 = 31;
    int v6 = 25;
    int v7 = 92;
    int i;
    for (i = 0; i < 18; i++) {
        v7 = v7 + v5;
    }
    v3 = v3 + v5;
    return v0;
}
int main(void) { return test_func(); }
