int test_func(void) {
    int v0 = 48;
    int v1 = 51;
    int v2 = 56;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
