int test_func(void) {
    int v0 = 44;
    int v1 = 99;
    int v2 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
