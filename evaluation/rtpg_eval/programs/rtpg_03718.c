int test_func(void) {
    int v0 = 65;
    int v1 = 52;
    int v2 = 86;
    int v3 = 37;
    int v4 = 66;
    int v5 = 48;
    int v6 = 48;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
