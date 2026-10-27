int test_func(void) {
    int v0 = 91;
    int v1 = 49;
    int v2 = 84;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    v1 = 86;
    return v0;
}
int main(void) { return test_func(); }
